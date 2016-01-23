#include "StrVec.h"

void StrVec::push_back(const string& s)
{
	chk_n_alloc();
	alloc.construct(first_free++, s);
}

void StrVec::push_back(string &&s)
{
	chk_n_alloc();
	alloc.construct(first_free++, std::move(s));
}

pair<string*, string*>
StrVec::alloc_n_copy(const string *b, const string *e)
{
	auto data = alloc.allocate(e - b);
	return {data, uninitialized_copy(b, e, data)};
}

void StrVec::free()
{
	if(elements){
		for_each(elements, first_free, [&](string &sp){alloc.destroy(&sp);});//lamada
		
		//for(auto p = first_free; p!= elements;)
		//	alloc.destroy(--p);
		alloc.deallocate(elements, cap - elements);
	}
}

StrVec::StrVec(const StrVec& sv)
{
	auto newdata = alloc_n_copy(sv.begin(), sv.end());
	elements = newdata.first;
	first_free = cap = newdata.second;
}

StrVec::~StrVec()
{
	 free();
}

StrVec& StrVec::operator=(const StrVec& rhs)
{
	auto data = alloc_n_copy(rhs.begin(), rhs.end());
	free();
	elements = data.first;
	first_free = cap = data.second;
	return *this;
}

void StrVec::reallocate()
{
	auto newcapcity = size()?2*size():1;
	auto newdata = alloc.allocate(newcapcity);
	auto dest = newdata;
	auto elem = elements;
	for(size_t i=0; i != size(); ++i){
		alloc.construct(dest++, std::move(*elem++));
	}
	free();
	elements = newdata;
	first_free = dest;
	cap = elements + newcapcity;
}

StrVec::StrVec(const initializer_list<string> &slist)
{
	size_t len = slist.size();
	auto newdata = alloc.allocate(len);
	auto dest = newdata;
	auto beg = slist.begin();
	while(beg != slist.end()){
		alloc.construct(dest++, std::move(*beg++));
	}
	
	elements = newdata;
	first_free = cap = dest;
}

StrVec::StrVec(StrVec &&s) noexcept :
	elements(s.elements), first_free(s.first_free), cap(s.cap)
{
	s.elements = s.first_free = s.cap = nullptr;
}

StrVec& StrVec::operator=(StrVec &&rhs) noexcept 
{
	if(this != &rhs){
		free();
		elements = rhs.elements;
		first_free = rhs.first_free;
		cap = rhs.cap;
		rhs.elements = rhs.first_free = rhs.cap = nullptr; 
	}
	return *this;
}
