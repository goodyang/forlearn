#include <iostream>
#include <string>
#include <vector>
using namespace std;
string func(const vector<string> &sv) 
{
	string longgestword;
	string ascender("bdfhklt");
	string descender("gjpqy");
	for(const auto &s : sv){
		if(s.find_first_of(ascender)==string::npos&&s.find_first_of(descender)==string::npos&&s.size()>longgestword.size()){
			longgestword = s;
		}
	}
	return longgestword;
}
int main()
{
	std::vector<string> v;
	string word;
	while(cin>>word){
		v.push_back(word);
	}
	cout << func(v) << endl;
	return 0;
}