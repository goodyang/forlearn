#include <iostream>

std::istream &read_s(std::istream &is)
{
	char ch;
	while(is>>ch){
		std::cout << ch;
	}
	is.clear();
	return is;
}

int main()
{
	auto state = read_s(std::cin).rdstate();
	std::cout << state << std::endl;
	
	std::cout << "hi!" << std::endl;
	std::cout << "hi!" << std::flush;
	std::cout << "hi!" << std::ends;
	
	std::cout << "over" << std::endl;
	return 0;
}