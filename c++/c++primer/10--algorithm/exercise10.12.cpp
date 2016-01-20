#include <iostream>
#include <vector>
#include <algorithm>
#include "Sales_data.h"
using namespace std;

bool compareIsbn(const Sales_data &d1, const Sales_data &d2)
{
	return d1.isbn().size() < d2.isbn().size();
}
int main()
{
	Sales_data d1("aa"), d2("aaaa"), d3("aaa"), d4("z"), d5("aaaaz"), d6("dd");
	vector<Sales_data> sv({d1,d2,d3,d4,d5,d6});
	sort(sv.begin(), sv.end(), compareIsbn);
	for(auto &d : sv) cout << d.isbn() << " ";
	cout << endl;
	return 0;
}