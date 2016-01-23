#include <iostream>
#include "HasPtr.h"
#include <string>
using namespace std;

int main()
{
	HasPtr h1("abcd");
	HasPtr h2("efg");
	
	swap(h1, h2);
	
	cout << h1.getStr() << endl;
	cout << h2.getStr() << endl;
	
	return 0;
}