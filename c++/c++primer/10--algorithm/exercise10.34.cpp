#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> v = {0,1,2,3,4,5,6,7,8,9};
	for(auto beg = v.crbegin();beg!=v.crend();beg++)
	{
		cout << *beg << " ";
	}
	cout << endl;
	auto end = v.cend();
	--end;
	while(end != v.cbegin()){
		cout << *end-- << " ";
	}
	cout << *end << endl;
	return 0;
}