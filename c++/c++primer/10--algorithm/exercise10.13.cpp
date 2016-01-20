#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool isBeyondFive(const string &s)
{
	return s.size()>=5?true:false;
}
int main()
{
	vector<string> sv({"abcde","aa","string","algorithm","std"});
	partition(sv.begin(), sv.end(), isBeyondFive);
	for(auto &s : sv) cout << s << " ";
	cout << endl;
	return 0;
}