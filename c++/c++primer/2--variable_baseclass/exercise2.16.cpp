#include <iostream>
int main()
{
	int i = 0, &r1 = i;
	double d = 0, &r2 = d;
	//r2 = 3.1416;
	//r2 = r1;
	//i = r2;
	r1 = d;
	std::cout << r1 << std::endl;
	std::cout << r2 << std::endl;
	std::cout << i << std::endl;
	return 0;
}