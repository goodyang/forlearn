#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
int main()
{
	string s = "word";
	string pl = s + (s[s.size() - 1] == 's' ? "" : "s");
	
	vector<int> ivec = {0,1,2,3,4,5,6};
	vector<int>::size_type cnt = ivec.size();
	for(vector<int>::size_type ix = 0; ix != ivec.size();ix++,cnt--){
		ivec[ix] = cnt;
		cout << ix << ";" << cnt << endl;
	}
	cout << endl;
	for(auto &i : ivec) {
		cout << i << " ";
	}
	cout << endl;
	
	int x[10]; int *p = x;
	cout << sizeof(x)/sizeof(*x) << endl;
	cout << sizeof(p)/sizeof(*p) << endl;
	return 0;
}