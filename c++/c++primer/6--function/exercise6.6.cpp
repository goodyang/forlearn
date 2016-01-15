#include <iostream>
using std::cout;using std::cin;using std::endl;
int test(int val)
{
	int i=0;
	static int si = 0;
	si++;
	cout << val << "\t"
		<< si << "\t"
		<< i << endl;
	return 0;
}
int main()
{
	for(int i=0;i < 10; i++) {
		test(i);
	}
	cout << endl;
}