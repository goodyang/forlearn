#ifndef HASPTR_H
#define HASPTR_H

#include <string>
using std::string;
class HasPtr{
	friend void swap(HasPtr&, HasPtr&);
	friend bool operator<(const HasPtr &lhs, const HasPtr &rhs);
	public:
		HasPtr(const string &s=string()):
			ps(new string(s)), i(0){ }
		HasPtr(const HasPtr &h);
		HasPtr(const HasPtr &&) noexcept;
		string getStr() const {
			return *ps; 
		}
		//HasPtr& operator=(const HasPtr&);
		HasPtr& operator=(HasPtr rhs);
		~HasPtr(){
			delete ps;
		}
		
	private:
		string *ps;
		int i;
};

HasPtr::HasPtr(const HasPtr &h):
	ps(new string(*h.ps)),
	i(h.i)
{	
}
HasPtr::HasPtr(const HasPtr &&h):
	ps(h.ps), i(h.i)
{
	p.ps = 0;
}
/**HasPtr& HasPtr::operator=(const HasPtr& h)
{
	auto new_p = new string(*h.ps);
	delete ps;
	ps = new_p;
	i = h.i;
	return *this;
}**/
HasPtr& HasPtr::operator=(HasPtr rhs)
{
	swap(*this, rhs);
	return *this;
}

inline 
void swap(HasPtr &lhs, HasPtr &rhs)
{
	std::cout << "swap..." << std::endl;
	using std::swap;
	swap(lhs.ps, rhs.ps);
	swap(lhs.i, rhs.i);
}
inline
bool operator<(const HasPtr&lhs, const HasPtr& rhs)
{
	return *lhs.ps<*rhs.ps;
}
#endif