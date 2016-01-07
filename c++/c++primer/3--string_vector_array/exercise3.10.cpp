#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s;
	cout << "Enter a string contain some punctuation characters" << endl;
	cin >> s;
	string result;
	for(auto c : s) {
		if(!ispunct(c)){
			result += c;
		}			
	}
	cout << result;
	
	const string s1= "Keep out!";
	for(auto &c : s1){}
	
	return 0;
}