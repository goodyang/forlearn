#include <iostream>
#include <list>
#include <vector>
#include <forward_list>

using namespace std;

int main()
{
	int ia[] = {0, 1,1,2,3,5,8,13,21,55,89};
	list<int> ilist(ia, end(ia));
	vector<int> iv(ilist.begin(), ilist.end());
	forward_list<int> flist(ilist.begin(), ilist.end());
	/**for(auto i : ia){
		ilist.push_back(i);
		iv.push_back(i);
	}**/
	cout << ilist.size() << endl;
	cout << iv.size() << endl;

	auto iter1 = ilist.begin();
	while(iter1 != ilist.end()){
		if(*iter1&0x1) 
			iter1 = ilist.erase(iter1);
		else
			iter1++;
	}
	auto iter2 = iv.begin();
	while(iter2 != iv.end()) {
		if(!(*iter2&0x1)) 
			iter2 = iv.erase(iter2);
		else 
			iter2++;
	}

	auto fiter1 = flist.before_begin();
	auto fiter2 = flist.begin();
	while(fiter2 != flist.end()) {
		if(*fiter2&0x1)
			fiter2 = flist.erase_after(fiter1);
		else{
			fiter1 = fiter2;
			fiter2++;
		}
	}

	for(const auto &i:ilist) cout << i << " ";
	cout << endl;
	for(const auto &i:iv) cout << i << " ";
	cout << endl;
	for(const auto &i:flist) cout << i << " ";
	cout << endl;
	return 0;
}
