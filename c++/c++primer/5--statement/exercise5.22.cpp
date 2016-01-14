#include <iostream>
using std::cout;using std::cin;using std::endl;
int main()
{
	begin:
		int sz = 10;
		if(sz <= 11) {
			cout << sz << endl;
			goto begin;
		}
	return 0;
}