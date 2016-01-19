#include <iostream>
#include <string>

using namespace std;
string func(const string name, const string prefix, const string suffix){
	auto ret = name;
	ret.insert(ret.begin(), prefix.begin(), prefix.end());
	ret.append(suffix);
	return ret;
}
string func2(const string name, const string prefix, const string suffix){
	auto ret = name;
	ret.insert(0, prefix);
	ret.insert(ret.size(),suffix);
	return ret;
}
int main()
{
	cout << func("Green", "Mr.", "III") << endl;
	cout << func2("Green", "Mr.", "III") << endl;
	return 0;
}