#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	vector<int> v = {0,1,2,3,4,5};
	fill_n(v.begin(), v.size(), 0);
	for(auto i : v) cout << i << " ";
	cout << endl;
	return 0;
}