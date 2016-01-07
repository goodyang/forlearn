#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() 
{
	string s;
	string entires;
	while(cin >> s) {
		entires += s + " ";
	}
	
	cout << entires << endl;
	
	return 0;
}