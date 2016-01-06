#include <iostream>
int main()
{
	int i1 = 42;
	int *p = &i1;
	std::cout << i1 << " " << p << " " << *p << std::endl;
	i1 += 42;
	std::cout << i1 << " " << p << " " << *p << std::endl;
	int i2 = 42;
	p = &i2;
	std::cout << i2 << " " << p << " " << *p << std::endl;
	
	int i = 42;
	int *p1 = &i;
	*p1 = *p1 * *p1;
	std::cout << *p1 << std::endl;
	return 0;
}