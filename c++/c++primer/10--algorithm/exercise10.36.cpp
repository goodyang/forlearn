#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <list>
using namespace std;
int main()
{
	vector<int> iv = {0,1,2,3,4,5,6,7,8,9};
	list<int> il;
	copy(iv.begin()+2, iv.begin()+7, front_inserter(il));
	for_each(il.begin(), il.end(), [](int i){cout << i << " ";});
	cout << endl;
	return 0;
}