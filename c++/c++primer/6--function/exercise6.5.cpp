#include <iostream>
using std::cout;using std::cin;using std::endl;
int fact(int val) 
{
	int ret = 1;
	for(;val>0;val--) {
		ret *= val;
	}
	return ret;
}
int abs(int val) 
{
	int ret;
	if(val<0){
		ret = -val;
	}else{
		ret = val;
	}
	return ret;
}
int main()
{
	cout << "Enter a number:";
	int n;
	if(cin >> n) {
		cout << n << " 's absolute value is " << abs(n) << endl;
	}
	return 0;
}