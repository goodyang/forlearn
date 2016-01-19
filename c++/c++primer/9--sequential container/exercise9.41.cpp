#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	std::vector<char> v({'s','a','g','a'});
	string s(v.begin(),v.end());
	cout << s << endl;
	return 0;
}