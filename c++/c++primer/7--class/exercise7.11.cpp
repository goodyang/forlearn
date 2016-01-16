#include <iostream>
#include "Sales_data.h"
using namespace std;
int main()
{
	Sales_data s1;
	read(cin, s1);
	print(cout, s1) << endl;
	
	Sales_data s2("0-201-78345-Y");
	print(cout, s2) << endl;
	
	Sales_data s3("0-201-78345-X", 4, 10.0);
	print(cout, s3) << endl;
	
	return 0;
}