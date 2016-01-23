#ifndef HASPTR_REF_COUNT_H
#define HASPTR_REF_COUNT_H

#include <string>
using std::string;using std::size_t;
class HasPtr{
	public:
		HasPtr(const string &s=string()):
			ps(new string(s)), i(0), use(new size_t(1)) { }
		HasPtr(const HasPtr &h);
		string getStr() const {
			return *ps; 
		}
		HasPtr& operator=(const HasPtr&);
		~HasPtr(){
			if(--*use==0){
				delete ps;
				delete use;
			}
		}
	private:
		string *ps;
		int i;
		size_t *use;
};

HasPtr::HasPtr(const HasPtr &h):
	ps(h.ps),
	i(h.i),
	use(h.use)
{	
	++*use;
}
HasPtr& HasPtr::operator=(const HasPtr& h)
{
	++*h.use;
	if(--*use==0){
		delete ps;
		delete use;
	}
	ps = h.ps;
	i = h.i;
	use = h.use;
	return *this;
}

#endif