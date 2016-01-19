#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

void func(forward_list<string> &flist, const string s1, const string s2)
{
	auto before = flist.before_begin();
	auto curr = flist.begin();
	while(curr!=flist.end()) {
		if(*curr == s1){
			flist.insert_after(curr, s2);
			return;
		}else{
			curr++;
		}
	}
	flist.insert_after(curr, s2);
}
int main()
{
	forward_list<string> flist = {"I","am","a","programmer"};
	func(flist, "a", "good");
	for(auto &s : flist) cout << s << " ";
	cout << endl;
	return 0;
}