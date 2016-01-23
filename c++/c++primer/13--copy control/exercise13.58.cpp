#include <iostream>
#include "Foo.h"
#include <vector>
using namespace std;
int main()
{
	vector<int> iv={31,2,3,5};
	Foo f(iv);
	f.sorted();
	
	return 0;
}