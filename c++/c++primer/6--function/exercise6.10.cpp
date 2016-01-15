#include <iostream>
using std::cout;using std::cin;using std::endl;
void swap(int *p, int *q)
{
	int temp = *p;
	*p = *q;
	*q = temp;
}
void swap1(int &p, int &q)
{
	int temp = p;
	p = q;
	q = temp;
}
int main()
{
	int m = 10, n = 20;
	int &r = m;
	cout << r << endl;
	cout << m << "\t" << n << endl;
	swap(&m, &n);
	cout << m << "\t" << n << endl;
	swap1(m, n);
	cout << m << "\t" << n << endl;
	return 0;
}