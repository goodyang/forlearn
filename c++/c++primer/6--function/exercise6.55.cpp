#include <iostream>
#include <vector>
using std::cout;using std::endl;

int func(int a, int b);

using pFunc1 = decltype(func) *;
typedef decltype(func) *pFunc2;
using pFunc3 = int (*)(int a, int b);
using pFunc4 = int(int a, int b);
typedef int(*pFunc5)(int a, int b);
using pFunc6 = decltype(func);

std::vector<pFunc1> vec1;
std::vector<pFunc2> vec2;
std::vector<pFunc3> vec3;
std::vector<pFunc4*> vec4;
std::vector<pFunc5> vec5;
std::vector<pFunc6*> vec6;

int add(int a, int b)
{
	return a+b;
}
int sub(int a, int b)
{
	return a-b;
}
int mul(int a, int b)
{
	return a*b;
}
int divide(int a, int b)
{
	return b!=0?a/b:0;
}
int main()
{
	int a = 7, b = 6;
	vec1.push_back(add);
	vec1.push_back(sub);
	vec1.push_back(mul);
	vec1.push_back(divide);
	cout << (*vec1[0])(a, b) << endl;
	cout << (*vec1[1])(a, b) << endl;
	cout << (*vec1[2])(a, b) << endl;
	cout << (*vec1[3])(a, b) << endl;
	
	vec2.push_back(add);
	cout << (*vec2[0])(a, b) << endl;
	return 0;
}