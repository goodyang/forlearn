#include <iostream>
#include <string>
using std::cout;using std::cin;using std::endl;
using std::string;
int main()
{
	string s1,s2;
	bool isRepeat = false;
	while(cin >> s1) {
		if(s1 == s2){
			if(!isupper(s1[0])){
				continue;
			}
			isRepeat = true;
			break;
		}else{
			s2 = s1;
		}
	}
	cout << endl;
	if(isRepeat) {
		cout << s2 << endl;
	}else {
		cout << "there is no repeat" << endl;
	}
	return 0;
}