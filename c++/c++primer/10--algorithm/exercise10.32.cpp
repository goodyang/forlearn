#include <iostream>
#include <algorithm>
#include <iterator>
#include "Sales_item.h"
using namespace std;


int main()
{
	istream_iterator<Sales_item> item_iter(cin), eof;
	ostream_iterator<Sales_item> out_iter(cout, "\n");
	vector<Sales_item> sv;
	
	while(item_iter!=eof){
		sv.push_back(*item_iter++);
	}

	sort(sv.begin(),sv.end(),compareIsbn);
	for(auto beg=sv.begin(), end = beg; beg!=sv.end();beg = end)
	{
		end = find_if(beg, sv.end(), [beg](const Sales_item &item){return item.isbn() != beg->isbn();});
		cout << accumulate(beg, end, Sales_item(beg->isbn())) << endl; 
	}
	

	return 0;
}