#include <iostream>
using namespace std;
int max(int i1, const int* i2)
{
	if(i1 > (*i2)){
		return i1;
	}else{
		return (*i2);
	}
}
int main()
{
	int i1 = 3;
	int i2 = 4;
	cout << max (i1, &i2) << endl;
	return 0;
}