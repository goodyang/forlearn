#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
	/*string s;
	while(getline(cin, s)){
		cout << s << endl;
	}*/
	
	/*string s;
	while(cin >. s) {
		cout << s <<endl;
	}*/
	
	string s2;
	while(getline(cin, s2, ':')) {
		cout << s2 << endl;
	}
	return 0;
}