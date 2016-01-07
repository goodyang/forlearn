#include <iostream>
#include <vector>

using std::cin;using std::cout;using std::endl;
using std::vector;

int main()
{
	cout << "Enter ten number is: ";
	vector<int> v;
	int val;
	int cnt = 10;
	while(cnt>0 && cin >> val){
		--cnt;
		v.push_back(val);
	}
	
	auto it = v.begin();
	while(it != v.end()) {
		*it *= *it;
		++it;
	}
	
	it = v.begin();
	while(it != v.end()) {
		cout << *it <<" ";
		++it;
	}
	cout << endl;
	
	return 0;
}