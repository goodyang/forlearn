#include <iostream>
#include <string>
using namespace std;
int sum(initializer_list<int> ilist )
{
	int sum = 0;
	for(const auto &i : ilist) {
		sum += i;
	}
	return sum;
}

int main()
{
	initializer_list<int> list = {1,2,3,4,5};
	cout << sum(list) << endl;
	cout << sum({5,5,5,5}) << endl;
	return 0;
}

bool str_subrange(const string &str1, const string &str2)
{
	if(str1.size() == str2.size())
		return str1 == str2;
	auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();
	for(decltype(size) i = 0; i != size; ++i){
		if(str1[i] != str2[i])
			return;
	}
}