#include "String.h"
#include <iostream>

String::String(const char* cp)
{
	size_t len = strlen(cp);
	auto new_data = alloc.allocate(len);
	auto dest = new_data;
	for(size_t i=0; i != len; i++){
		alloc.construct(dest++, std::move(cp[i]));
	}
	elements = new_data;
	first_free = cap = dest;	
}

void String::push_back(const char &ch)
{
	chk_n_alloc();
	alloc.construct(first_free++, ch);
}

pair<char*, char*> String::alloc_n_copy(const char *b, const char *e)
{
	auto data = alloc.allocate(e - b);
	return {data, uninitialized_copy(b, e, data)};
}

void String::free()
{
	if(elements){
		for_each(elements, first_free, [&](const char& ch){alloc.destroy(&ch);});
		alloc.deallocate(elements, cap - elements);
	}
}

String::String(const String& s)
{
	std::cout << "copy constructor used" << std::endl;
	auto data = alloc_n_copy(s.begin(), s.end());
	elements = data.first;
	first_free = data.second;
}

String::~String()
{
	free();
}

String& String:: operator=(const String& rhs)
{
	std::cout << "copy assignment operator used" << std::endl;
	auto data = alloc_n_copy(rhs.begin(), rhs.end());
	free();
	elements = data.first;
	first_free = data.second;
	return *this;
}

void String::reallocate()
{
	auto newcapacity = size() ? size()*2 : 1;
	
	// auto new_data = alloc.allocate(newcapacity);
	// auto dest = new_data;
	// auto elem = elements;	
	// for(size_t i=0; i !=size(); i++){
	// 	alloc.construct(dest++, std::move(*elem++));
	// }
	auto first = alloc.allocate(newcapacity);
	auto last = uninitialized_copy(make_move_iterator(begin()), make_move_iterator(end()), first);
	free();
	// elements = new_data;
	// first_free = dest;
	elements = first;
	first_free = last;
	cap = elements + newcapacity;
}

String::String(String &&s) noexcept :
	elements(s.elements), first_free(s.first_free), cap(s.cap)
{
	std::cout << "move constructor used" << std::endl;
	s.elements = s.first_free = s.cap = nullptr;
}
String& String::operator=(String &&rhs) noexcept
{
	std::cout << "move assignment operator used" << std::endl;
	if(this != &rhs){
		free();
		elements = rhs.elements;
		first_free = rhs.first_free;
		cap = rhs.cap;
		rhs.elements = rhs.first_free = rhs.cap = nullptr;
	}
	return *this;
}
/**int main()
{
	String s("saga");
	std::cout << s.size() << "\n"
		 << *s.begin() << "\n";
	for(auto ch: s) std::cout << ch << "";
	std::cout << std::endl;
	return 0;
}**/