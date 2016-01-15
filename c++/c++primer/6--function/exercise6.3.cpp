#include <iostream>
#include "Chapter6.h"
using std::cout;using std::cin;using std::endl;

int main()
{
	int f = fact(5);
	cout << f << endl;
	return 0;
}
int fact(int val) 
{
	int ret = 1;
	for(;val>0;val--) {
		ret *= val;
	}
	return ret;
}