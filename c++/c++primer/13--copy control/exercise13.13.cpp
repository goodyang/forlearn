#include <iostream>
#include <vector>
using namespace std;

struct X {
	X() { cout << "X()" << endl;}
	X(const X&){ cout << "X(const X&)" << endl;}
	X& operator=(const X&){ cout << "operator="<< endl; return *this;}
	~X(){ cout << "~X" << endl;} 
};
void fnc1 (X x){
	cout << "fnc1" << endl;
}
void func2 (X &x){
	cout << "fnc2" << endl;
}
X func3(X x){
	cout << "fnc3" << endl;
	return x;
}
void func4(X &x){
	cout << "func4" << endl;
	vector<X> xv;// = {x};
	xv.push_back(X());
}
int main()
{
	/*X x1;
	X x2(x1);
	X x3 = x2;
	x3 = x1;*/
	X *x4 = new X();
	
	/*fnc1(x1);
	func2(x2);
	func3(x3);*/
	func4(*x4);
	cout << "delete x4" << endl;
	delete x4;
	
	return 0;
}

