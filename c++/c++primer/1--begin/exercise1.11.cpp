#include <iostream>
int main()
{
	int v1 = 0, v2 = 0;
	std::cout << "Enter two numbers : " << std::endl;
	std::cin >> v1 >> v2;
	if(v1 > v2){
		int temp = v1;
		v1 = v2;
		v2 = temp;
	}
	while(v1 <= v2){
		std::cout << v1 <<"\t";
		++v1;
	}
	std::cout << std::endl;
	return 0;
}