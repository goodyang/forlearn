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
	
	unsigned len1 = s1.size(), len2 = s2.size();
	if(len1 == len2) {
		cout << "the two string's length is equal." << endl;
	} else {
		cout << "the two string's length is not equal." << endl;
		if(len1 > len2) {
			cout << "the longer string is: " << s1 << endl;
		} else if(len1 < len2) {
			cout << "the longer string is: " << s2 << endl;
		}
	}
	return 0;
}