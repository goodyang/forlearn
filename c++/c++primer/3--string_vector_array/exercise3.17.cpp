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
	cout << "Enter some words " << endl;
	string s;
	vector<string> v;
	while(cin >> s) {
		v.push_back(s);
	}
	
	for(auto &s : v) {
		for(auto &c : s) {
			c = toupper(c);
		}
	}
	
	for(auto &s : v) {
		cout << s << endl;
	}
	
	return 0;
}