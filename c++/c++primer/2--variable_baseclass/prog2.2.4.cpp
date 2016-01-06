#include <iostream>
int reused = 42;
int i = 42;
int main()
{
	int unique = 0;
	std::cout << reused << " " << unique << std::endl;
	int reused = 0;
	std::cout << reused << " " << unique << std::endl;
	
	std::cout << ::reused << " " << unique << std::endl;
	
	int i = 100;
	int j = i;
	std::cout << j << std::endl;
	return 0;
}