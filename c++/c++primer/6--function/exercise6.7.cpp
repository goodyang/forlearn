#include <iostream>
using std::cout;using std::cin;using std::endl;
int test()
{
	static int i = -1;
	return ++i;
}
int main()
{
	for(int i=0;i < 10; i++) {
		cout << test() << endl;
	}
	cout << endl;
	return 0;
}