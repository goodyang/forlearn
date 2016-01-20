#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;
int main()
{
	vector<int> vec = {1,2,3,3,1,4,2};
	list<int> list2;
	list<int> list3;
	unique_copy(vec.begin(), vec.end(), inserter(list2, list2.begin()));
	unique_copy(vec.begin(), vec.end(), back_inserter(list3));
	for(auto i : list2){cout << i << " ";};
	cout << endl;
	for(auto i : list3){cout << i << " ";};
	cout << endl;

	vector<int> iv(10);
	int index = 1;
	for_each(iv.begin(), iv.end(), [&](int &i){i = index++;});
	for(auto i : iv){cout << i << " ";};
	cout << endl;
	list<int> list4;
	list<int> list5;
	list<int> list6;
	copy(iv.begin(), iv.end(), inserter(list4, list4.begin()));
	copy(iv.begin(), iv.end(), front_inserter(list5));
	copy(iv.begin(), iv.end(), back_inserter(list6));
	
	for_each(list4.begin(), list4.end(), [](int i){cout << i << " ";});
	cout << endl;
	for_each(list5.begin(), list5.end(), [](int i){cout << i << " ";});
	cout << endl;
	for_each(list6.begin(), list6.end(), [](int i){cout << i << " ";});
	cout << endl;
	return 0;
}