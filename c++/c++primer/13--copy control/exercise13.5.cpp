#include <iostream>
#include <string>
using std::string;
using std::cout;using std::endl;
class HasPtr{
	public:
		HasPtr(const string &s=string()):
			ps(new string(s)), i(0){ }
		HasPtr(const HasPtr &h);
		string getStr() const {
			return *ps; 
		}
		HasPtr& operator=(const HasPtr&);
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
{	}
HasPtr& HasPtr::operator=(const HasPtr& h)
{
	ps = new string(*h.ps);
	i = h.i;
	return *this;
}
int main()
{
	HasPtr has("abcd");
	HasPtr has1(has);
	HasPtr has2 = has;
	cout << has1.getStr() << endl;
	cout << has2.getStr() << endl;
	return 0;
}