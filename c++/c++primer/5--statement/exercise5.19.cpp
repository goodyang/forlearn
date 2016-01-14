#include <iostream>
#include <string>
using std::cout;using std::cin;using std::endl;
using std::string;

int main()
{
	string s1;
	string s2;
	string rsp;
	do{
		cout << "Enter two string" <<endl;
		cin >> s1 >> s2;
		cout << "the short one is:";
		if(s1.size() > s2.size()) {
			cout << s2 << endl;
		}else {
			cout << s1 << endl;
		}
		cout << "More? Enter yes or no:";
		cin >> rsp;
	}while(!rsp.empty() && rsp != "no");
	
	return 0;
}