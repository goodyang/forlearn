#ifndef FOO_H
#define FOO_H

#include <iostream>
#include <vector>
using std::vector;
class Foo{
	public:
		Foo()=default;
		Foo(vector<int> data_):data(data_){ }
		Foo sorted() &&;
		Foo sorted() const &;
	private:
		vector<int> data;
};

Foo Foo::sorted() &&
{
	std::cout << "sorted rvalue" << std::endl;
	sort(data.begin(), data.end());
	return *this;
}

Foo Foo::sorted() const &
{
	std::cout <<"sorted lvalue" << std::endl; 
	Foo ret(*this);
	sort(ret.data.begin(), ret.data.end());
	return ret;
}

#endif