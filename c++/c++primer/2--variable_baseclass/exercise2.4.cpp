#include <iostream>
int main()
{
	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl;
	std::cout << u - u2 << std::endl;
	
	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl;
	std::cout << i -i2 << std::endl;
	std::cout << i - u << std::endl;
	std::cout << u - i << std::endl;
	
	std::cout << "a really, really long string literal "
				" that spans two lines " << std::endl;
	std::cout << "Who goes with F\145rgus?\012" << std::endl;
	std::cout << "2\115\12" << std::endl;
	std::cout << "2\tM\n" << std::endl;
	
	
	return 0;
}