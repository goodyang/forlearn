#include <iostream>
#include "Account.h"
int main()
{
	Account a;
	a.rate(42.42);
	std::cout << a.rate() << std::endl;
	return 0;
}