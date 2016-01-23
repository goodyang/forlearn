#ifndef MESSAGE_H
#define MESSAGE_H

#include <string>
#include <set>
#include "Folder.h"
using std::string;using std::set;

class Folder;
class Message{
	friend class Folder;
	friend void swap(Message&, Message&);
	friend void swap(Folder &, Folder &);
	public:
		explicit Message(const string& str=""):contents(str){ }
		Message(const Message&);
		Message& operator=(const Message&);
		Message(Message&&);
		Message& operator=(Message&&);
		~Message();
		
		void save(Folder&);
		void remove(Folder&);
		
	private:
		string contents;
		set<Folder*> folders;
		
		void add_to_Folders(const Message&);
		void remove_from_Folders();
		
		void addFldr(Folder *f) {folders.insert(f);}
		void removeFldr(Folder *f){folders.erase(f);}
		
		void move_Folders(Message*);
};

#endif