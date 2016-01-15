#include <iostream>
using namespace std;
void swap_point(int **p1, int **p2)
{
	int *t = *p1;
	*p1 = *p2;
	*p2 = t;
}
void swap_point2(int *&p1, int *&p2)
{
	auto t = p1;
	p1 = p2;
	p2 = t;
}
int main()
{
	int i1 = 3, i2 = 4;
	int *p1 = &i1, *p2 = &i2;
	cout << *p1 << "\t" << *p2 << endl;
	swap_point(&p1, &p2);
	cout << *p1 << "\t" << *p2 << endl;
	swap_point2(p1, p2);
	cout << *p1 << "\t" << *p2 << endl;
	return 0;
}