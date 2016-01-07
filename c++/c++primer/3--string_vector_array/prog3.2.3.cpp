#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	/*string s("Hello World!!!");
	decltype(s.size()) punct_cnt = 0;
	
	for(auto c : s) {
		if(ispunct(c)){
			++punct_cnt;
		}
	}
	cout << punct_cnt << " punctuation characters in " << s << endl;
	
	for(auto &c : s) {
		c = toupper(c);
	}
	cout << s << endl;
	
	for(decltype(s.size()) index = 0; index != s.size()&&!isspace(s[index]); ++index)
		s[index] = tolower(s[index]);
	cout << s << endl;*/
	
	const string hexdigits = "0123456789ABCDEF";
	cout << "Enter a series of numbers between 0 and 15"
			<< " seperated by spaces. Hit ENTER when finished:" << endl;
	string result;
	string :: size_type n;
	while(cin >> n) {
		if(n < hexdigits.size()) {
			result += hexdigits[n];
		}
	}
	cout << "Your hex number is:" << result << endl;
	
	return 0;
}