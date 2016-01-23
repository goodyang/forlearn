#include "Message.h"

void Message::add_to_Folders(const Message& m)
{
	for(auto f: m.folders)
		f->addMsg(this);
}
Message::Message(const Message& m):
	contents(m.contents), folders(m.folders)
{
	add_to_Folders(m);
}
void Message::remove_from_Folders()
{
	for(auto f:folders)
		f->removeMsg(this);
}
Message::~Message()
{
	remove_from_Folders();
}
Message& Message::operator=(const Message& m)
{
	remove_from_Folders();
	contents = m.contents;
	folders = m.folders;
	add_to_Folders(m);
	return *this;
}
void Message::save(Folder& f)
{
	folders.insert(&f);
	f.addMsg(this);
}
void Message::remove(Folder& f)
{
	folders.erase(&f);
	f.removeMsg(this);
}

inline 
void swap(Message &lhs, Message &rhs)
{
	for(auto f:lhs.folders)
		f->removeMsg(&lhs);
	for(auto f:rhs.folders)
		f->removeMsg(&rhs);
	swap(lhs.folders, rhs.folders);
	swap(lhs.contents, lhs.contents);
	for(auto f:lhs.folders)
		f->addMsg(&lhs);
	for(auto f:rhs.folders)
		f->addMsg(&rhs);
}

void Message::move_Folders(Message *m)
{
	folders = std::move(m->folders);
	for(auto f : folders) {
		f->removeMsg(m);
		f->addMsg(this);
	}
	m->folders.clear();
}

Message::Message(Message &&m):
	contents(std::move(m.contents))
{
	move_Folders(&m);
}

Message& Message::operator=(Message &&rhs)
{
	if(this != &rhs){
		remove_from_Folders();
		contents = std::move(rhs.contents);
		move_Folders();
	}
	return *this;
}