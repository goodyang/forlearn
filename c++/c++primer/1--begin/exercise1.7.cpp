#include <iostream>
int main()
{
	/*
	*注释对 /**/ 不能嵌套。
	* "不能嵌套" 几个字会被认为是源码，
	* 像剩余程序一样处理
	*/
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The sum of " ;
	std::cout << v1 ;
	std::cout << " and " ;
	std::cout << v2 ;
	std::cout << " is " ;
	std::cout << v1 + v2 << std::endl;
	
	return 0;
}