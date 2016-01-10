#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
	bool flag;
	char cval;
	short sval;
	unsigned short usval;
	int ival;
	unsigned uival;
	long lval;
	unsigned long ulval;
	float fval;
	double dval;
	cout << (3.14159L + 'a') << endl;
	cout << (dval + ival) << endl;
	cout << (dval + fval) << endl;
	cout << (ival = dval) << endl;
	
	return 0;
}