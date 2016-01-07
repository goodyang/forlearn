#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int main()
{
	int ival;
	vector<int> v;
	while(cin >> ival) {
		v.push_back(ival);
	}
	
	auto beg = v.begin();
	auto end = v.end();
	while(beg != end-1) {
		cout << *beg + *(beg+1) << " ";
		++beg;		
	}
	cout << endl;
	
	beg = v.begin();
	end = v.end()-1;
	while(beg++ <= end--) {
		cout << (*beg + *end) << " ";
		//++beg;
		//--end;
	}
	cout << endl;
	
	cout << endl;
	return 0;
}