#include "Folder.h"

Folder::Folder(const Folder& f)
	:mesages(f.mesages){
	add_to_Message(f);		
}

void Folder::add_to_Message(const Folder &f)
{
	for(auto m:f.mesages)
		m->addFldr(this);
}

void Folder::remove_from_Message()
{
	for(auto m:mesages)
		m->removeFldr(this);
}
Folder::~Folder()
{
	remove_from_Message();
}

Folder& Folder::operator=(const Folder& rhs)
{
	remove_from_Message();
	mesages = rhs.mesages;
	add_to_Message(rhs);
	return *this;
}

inline 
void swap(Folder& lhs, Folder& rhs)
{
	using std::swap;
	for(auto m:lhs.mesages)
		m->removeFldr(&lhs);
	for(auto m:rhs.mesages)
		m->removeFldr(&rhs);
	swap(lhs.mesages, rhs.mesages);
	for(auto m:lhs.mesages)
		m->addFldr(&lhs);
	for(auto m:rhs.mesages)
		m->addFldr(&rhs);
}