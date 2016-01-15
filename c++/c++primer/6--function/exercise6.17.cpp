#include <iostream>
#include <string>
using namespace std;
bool isContainUpper(const string &s)
{
	for(auto &c : s){
		if(isupper(c)){
			return true;
		}
	}
	return false;
}
void lowerLetter(string &s)
{
	for(auto &c : s){
		if(isupper(c)){
			c = tolower(c);
		}
	}
}
int count(const string &s, char ch){
	return 0;
}
int main()
{
	string s("Alphabet");
	cout << s << " whether it container upper letter ? " << isContainUpper(s) << endl;
	lowerLetter(s);
	cout << s << " whether it container upper letter ? " << isContainUpper(s) << endl;
	count("abcda", 'a');
	return 0;
}