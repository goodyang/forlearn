#include <iostream>
using std::cout;using std::cin;using std::endl;
int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	unsigned spaceCnt = 0, tableCnt = 0, enterCnt = 0;
	char ch;
	while(cin >> std::noskipws>> ch) {
		cout << ch << endl;
		switch(ch) {
			case 'a': case 'A':
				++aCnt;
				break;
			case 'e': case 'E':
				++eCnt;
				break;
			case 'i': case 'I':
				++iCnt;
				break;
			case 'o': case 'O':
				++oCnt;
				break;
			case 'u': case 'U':
				++uCnt;
				break;
			case ' ': 
				++spaceCnt;
				break;
			case '\t':
				++tableCnt;
				break;
			case '\n':
				++enterCnt;
				break;
		}
	}
	
	cout << "Number of vowel a:\t" << aCnt << '\n'
		 << "Number of vowel e:\t" << eCnt << '\n'
		 << "Number of vowel i:\t" << iCnt << '\n'
		 << "Number of vowel o:\t" << oCnt << '\n'
		 << "Number of vowel u:\t" << uCnt << '\n'
		 << "Space:\t" << spaceCnt << '\n' 
		 << "Table:\t" << tableCnt << '\n'
		 << "Enter:\t" << enterCnt << endl;
		 
	return 0;
}