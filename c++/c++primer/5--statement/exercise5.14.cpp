#include <iostream>
#include <vector>
#include <string>
using std::cout;using std::cin;using std::endl;
using std::string;using std::vector;
using std::noskipws;
int main()
{
	vector<string> text;
	string s;
	char c;
	int maxAppear = 1;
	string maxAppearStr;
	string temp;
	int tempCnt;
	while(cin >> noskipws >> c) {
		if(!isspace(c)){
			s += c;
		}else{
			if(temp == s){
				++tempCnt;
				if(tempCnt > maxAppear) {
					maxAppear = tempCnt;
					maxAppearStr = temp;
				}
			}else{
				tempCnt=1;
				temp = s;
			}
			text.push_back(s);
			s = "";
		}
	}
	
	
		
	for(string str : text) {
		cout << str << endl;
	}
	
	if(maxAppear <= 1) {
		cout << " there is no repeat word in the text." << endl;
	} else {
		cout << maxAppearStr << " appears " << maxAppear << " times" << endl;
	}
	
	return 0;
}