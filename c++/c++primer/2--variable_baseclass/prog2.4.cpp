#include <iostream>
int main()
{
	int i = 42;
	const int &r1 = i;
	const int &r2 = 42;
	const int &r3 = r1 * 2;
	//int &r4 = r1 * 2;
	
	double dval = 3.14;
	const int &ri = dval;
	std::cout << ri << std::endl;
	
	const int *p;
	//const int &r;
	//std::cout <<*r <<std::endl;
	
	//constexpr int  mf = 20;
	//std::cout << mf << std::endl;
	
	int null = 0, *p1 = null;
	
	return 0;
}