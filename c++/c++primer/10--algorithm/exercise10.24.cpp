#include <iostream>
#include <algorithm>
#include <functional>
#include <string>
#include <vector>
using namespace std;
using namespace std::placeholders;

auto check_size(const string &s, string::size_type sz) -> bool
{
	return s.size() < sz;
}
auto find_fist_greater(vector<int> const &iv, string const &s) -> vector<int>::const_iterator
{
	auto lamada = [&](int i){return i>=0&&bind(check_size, s, i)();};
	return find_if(iv.begin(), iv.end(), lamada);
}
int main()
{
	vector<int> iv({0,1,2,3,4,5,6,7});
	string example("saga");
	cout << *find_fist_greater(iv, example) << endl;
	return 0;
}