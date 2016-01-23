#ifndef STRING_SAGA
#define STRING_SAGA
#include <memory>
#include <utility>
#include <algorithm>
#include <cstring>
#include <iterator>
using std::allocator;
using std::pair;using std::uninitialized_copy;
using std::for_each;using std::strlen;using std::make_move_iterator;
class String {
	public:
		String();
		String(const char*);
		String(const String&);
		String& operator=(const String&);
		String(String&&) noexcept;
		String& operator=(String&&) noexcept;
		~String();
		
		void push_back(const char&);
		size_t size() const {return first_free- elements;}
		size_t capacity() const {return cap - elements;}
		char *begin() const {return elements;}
		char *end() const {return first_free;}
		
	private:
		char* elements;
		char* first_free;
		char* cap;
		
		allocator<char> alloc;
		void chk_n_alloc(){if(size()==capacity()) reallocate();}
		pair<char*, char*> alloc_n_copy(const char*, const char*);
		void free();
		void reallocate();	
};

#endif