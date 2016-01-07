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
	
	cout << v1.size() << " " << v2.size() << " "
		<< v3.size() << " " << v4.size() << " "
		<< v5.size() << " " << v6.size() << " "
		<< v7.size() << endl;
		
	vector<int> v8(10, 42);
	vector<int> v9(10);
	for(auto &i : v9){
		i = 42;
	}
	vector<int> v10;
	for(int i=0; i<10; i++){
		v10.push_back(42);
	};
	for(auto &i : v8) {
		cout << i << " ";
	}
	cout << endl;
	for(auto &i : v9) {
		cout << i << " ";
	}
	cout << endl;
	for(auto &i : v9) {
		cout << i << " ";
	}
	cout << endl;
		
	return 0;
}