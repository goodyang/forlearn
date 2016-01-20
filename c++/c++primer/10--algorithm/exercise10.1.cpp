#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <list>

using namespace std;

int main()
{
	list<string> slist;
	string temp;
	while(cin >> temp) {
		slist.push_back(temp);
	}
	int countnumer = count(slist.begin(), slist.end(), "since");
	cout << countnumer << endl;

	vector<int> iv = {2,3,4,2,33,2,6,7};
	countnumer = count(iv.begin(), iv.end(), 2);
	cout << countnumer << endl;	
	
	return 0;
}