#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{10};
	vector<int> v5{10, 42};
	vector<string> v6{10};
	vector<string> v7{10, "hi"};
	
	int cnt = 0;
	cout << "v1 : ";
	for(auto it = v1.begin(); it != v1.end(); it++) {
		++cnt;
		cout << *it;
	}
	cout << endl;
	cout << " length is " << cnt << endl;
	
	cnt = 0;
	cout << "v2 : ";
	for(auto it = v2.begin(); it != v2.end(); it++) {
		++cnt;
		cout << *it;
	}
	cout << endl;
	cout << " length is " << cnt << endl;
	
	cnt = 0;
	cout << "v3 : ";
	for(auto it = v3.begin(); it != v3.end(); it++) {
		++cnt;
		cout << *it;
	}
	cout << endl;
	cout << " length is " << cnt << endl;
	
	cnt = 0;
	cout << "v4 : ";
	for(auto it = v4.begin(); it != v4.end(); it++) {
		++cnt;
		cout << *it;
	}
	cout << endl;
	cout << " length is " << cnt << endl;
	
	cnt = 0;
	cout << "v5 : ";
	for(auto it = v5.begin(); it != v5.end(); it++) {
		++cnt;
		cout << *it;
	}
	cout << endl;
	cout << " length is " << cnt << endl;
	
	cnt = 0;
	cout << "v6 : ";
	for(auto it = v6.begin(); it != v6.end(); it++) {
		++cnt;
		cout << *it;
	}
	cout << endl;
	cout << " length is " << cnt << endl;
	
	cnt = 0;
	cout << "v7 : ";
	for(auto it = v7.begin(); it != v7.end(); it++) {
		++cnt;
		cout << *it;
	}
	cout << endl;
	cout << " length is " << cnt << endl;
	
	cnt = 0;
	cout << "v1 : ";
	for(auto it = v1.begin(); it != v1.end(); it++) {
		++cnt;
		cout << *it;
	}
	cout << endl;
	cout << " length is " << cnt << endl;
}