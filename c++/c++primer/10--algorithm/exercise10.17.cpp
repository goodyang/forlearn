#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include "Sales_data.h"
using namespace std;
int main()
{
	Sales_data d1("aa"), d2("aaaa"), d3("aaa"), d4("z"), d5("aaaaz"), d6("dd");
	vector<Sales_data> sv({d1,d2,d3,d4,d5,d6});
	sort(sv.begin(), sv.end(), 
		[](const Sales_data &s1, const Sales_data &s2)
			{return s1.isbn().size() < s2.isbn().size();});
	for(auto &d : sv) cout << d.isbn() << " ";
	cout << endl;
	return 0;
}