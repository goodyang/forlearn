#include <iostream>
#include "Person.h"
using namespace std;
int main()
{
	Person p;
	while(read(cin, p))
		print(cout, p) << endl;
	return 0;
}