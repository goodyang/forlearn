#include <iostream>
#include <vector>
#include "String.h"
using std::vector;
int main()
{
	vector<String> Sv;
	std::cout << Sv.size() << std::endl;
	Sv.push_back("saga");
	std::cout << Sv.size() << std::endl;
	Sv.push_back("kobe");
	std::cout << Sv.size() << std::endl;
	Sv.push_back("michael");
	std::cout << Sv.size() << std::endl;
	Sv.push_back("42");
	std::cout << Sv.size() << std::endl;
	
	return 0;
}