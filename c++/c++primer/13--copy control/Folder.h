#ifndef FOLDER_H
#define FOLDER_H

#include <set>
#include "Message.h"
using std::set;

class Message;
class Folder {
	friend class Message;
	friend void swap(Folder&, Folder&);
	friend void swap(Message&, Message&);
	public:
		Folder() = default;
		Folder(const Folder& f);
		Folder& operator=(const Folder& f);
		~Folder();
	private:
		set<Message*> mesages;
		void add_to_Message(const Folder& f);
		void remove_from_Message();
		
		void addMsg(Message *m) {mesages.insert(m);}
		void removeMsg(Message *m){mesages.erase(m);}
};

#endif