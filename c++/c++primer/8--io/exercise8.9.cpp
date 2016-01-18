#include <iostream>
#include <sstream>

std::istream &read_s(std::istream &is)
{
	std::string str;
	while(is>>str){
		std::cout << str << std::endl;
	}
	is.clear();
	return is;
}

int main()
{
	std::istringstream iss("happy birthday");
	auto state = read_s(iss).rdstate();
	return 0;
}