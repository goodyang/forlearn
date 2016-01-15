#include <iostream>
#include <string>
using namespace std;

void reset(int &i)
{
	i = 0;
}
string::size_type find_char(const string &s, const char &c, string::size_type &occurs)
{
	auto ret = s.size();
	occurs = 0;
	for(decltype(ret) i = 0; i != s.size(); ++i ){
		if(s[i] == c){
			if(ret == s.size()){
				ret = i;
			}
			++occurs;
		}
	}
	return ret;
}
int main()
{
	int i = 42;
	reset(i);
	cout << i << endl;
	
	string::size_type ctr;
	string s = "abcdefg";
	const char &g = 'g';
	cout << find_char("abcdefg", 'c', ctr) << endl;
	cout << ctr << endl;
	return 0;
}