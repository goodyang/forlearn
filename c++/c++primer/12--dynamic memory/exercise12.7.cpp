#include <iostream>
#include <memory>
#include <vector>
using namespace std;

//using SPtr = shared_ptr<vector<int>>;
typedef shared_ptr<vector<int>> SPtr;

auto get_v()-> SPtr
{
	return make_shared<vector<int>>();
}
auto read_int(SPtr iv)->SPtr
{
	int i;
	while(cin >> i)
		iv->push_back(i);
	return iv;
}
auto print_int(SPtr iv)->ostream&
{
	for(auto &i : (*iv))
	{
		cout << i << " ";
	}
	return cout;
}
int main()
{
	auto iv = read_int(get_v());
	print_int(iv);
	return 0;
} 