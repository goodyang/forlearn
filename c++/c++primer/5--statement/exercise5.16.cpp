#include <iostream>
#include <string>
using std::cout;using std::cin;using std::endl;
using std::string;
int main()
{
	string s = "My name is saga!";
	char *cp = &s[0];
	while(cp&&*cp) {
		cout << *cp << endl;
		cp++;
	}
	
	auto beg = s.begin();
	for(;beg != s.end(); ++beg) {
		cout << *beg << endl;
	}
	
	string ss;
	/**char c;
	while(cin >> c) {
		ss += c;
	}
	cout << ss << endl;**/
	
	ss = "";
	for(char cc;cin>>cc;) {
		ss += cc;
	}
	cout << ss << endl;
	return 0;
}