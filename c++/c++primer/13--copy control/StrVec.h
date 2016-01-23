#ifndef STRVEC_H
#define STRVEC_H

#include <string>
#include <memory>
#include <utility>
#include <algorithm>
using std::string;using std::allocator;using std::pair;
using std::initializer_list;using std::for_each;
class StrVec {
	public:
		StrVec():elements(nullptr), first_free(nullptr), cap(nullptr){ }
		StrVec(const initializer_list<string>&);
		StrVec(const StrVec&);
		StrVec& operator=(const StrVec&);
		StrVec(StrVec&&) noexcept;
		StrVec& operator=(StrVec&&) noexcept;
		~StrVec();
		
		void push_back(const string&);
		void push_back(string&&);
		size_t size() const { return first_free- elements;}
		size_t capacity() const {return cap - elements;}
		string *begin() const{return elements;}
		string *end() const{return first_free;}
	private:
		string *elements;
		string *first_free;
		string *cap;
		
		allocator<string> alloc;//用来分配元素
		void chk_n_alloc(){	if(size() == capacity()) reallocate(); }
		pair<string*, string*> alloc_n_copy(const string*, const string*);
		void free();
		void reallocate();
};

#endif