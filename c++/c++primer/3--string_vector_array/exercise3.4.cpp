#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() 
{
	string s1, s2;
	cout << "Enter first string: " << endl;
	cin >> s1;
	cout << "Enter second string: " << endl;
	cin >> s2;
	
	if(s1 == s2) {
		cout << "the two string is equal." << endl;
	} else {
		cout << "the two string is not equal." << endl;
		if(s1 > s2) {
			cout << "the bigger string is: " << s1 << endl;
		} else if(s1 < s2) {
			cout << "the bigger string is: " << s2 << endl;
		}
	}
	return 0;
}