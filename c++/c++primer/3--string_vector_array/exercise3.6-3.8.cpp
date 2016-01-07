#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s;
	cout << "Enter a string:";
	cin >> s;
	for(char &c : s) {
		c = 'X';
	}
	cout << s << endl;
	decltype(s.size()) index = 0;
	while(index < s.size()) {
		s[index] = 'Y';
		index ++;
	}
	cout << s << endl;
	
	for(decltype(s.size()) i = 0; i < s.size(); i ++) {
		s[i] = 'Z';
	}
	
	cout << s <<endl;
	
	return 0;
}