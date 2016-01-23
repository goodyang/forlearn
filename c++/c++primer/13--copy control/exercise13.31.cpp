#include <iostream>
#include "HasPtr.h"
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	vector<HasPtr> hv;
	hv.push_back(HasPtr("saga"));
	hv.push_back(HasPtr("kobe"));
	hv.push_back(HasPtr("magic"));
	hv.push_back(HasPtr("michael"));
	
	sort(hv.begin(), hv.end());
	
	for(auto &h: hv) cout << h.getStr() << " ";
	
	return 0;
}