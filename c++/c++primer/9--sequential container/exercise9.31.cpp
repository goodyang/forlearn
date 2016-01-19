#include <iostream>
#include <list>
#include <forward_list>

using namespace std;

int main ()
{
	list<int> v = {0,1,2,3,4,5,6,7,8,9};
	auto iter = v.begin();
	
	while(iter != v.end()) {
		if(*iter % 2) {
			iter = v.insert(iter, *iter);
			advance(iter, 2);
		}else{
			iter = v.erase(iter);
		}
	}

	for(auto i : v) cout << i << " ";
	cout << endl;

	forward_list<int> fv = {0,1,2,3,4,5,6,7,8,9};
	auto before = fv.before_begin();
	auto curr = fv.begin();
	while(curr!=fv.end()) {
		if(*curr % 2) {
			curr = fv.insert_after(curr,*curr);
			before = curr;
			curr++;
		}else{
			curr =fv.erase_after(before);
		}
	}
	for(auto i : fv) cout << i << " ";
	cout << endl;

	return 0;
}