#include <iostream>
#include <string>
#include <vector>
#include <utility>
using namespace std;
int main()
{
	vector<pair<string, int>> pv;
	string word;
	int i;
	while(cin >> word >> i) {
		//pv.push_back({word, i});
		//pv.push_back(pair<string, int>(word, i));
		pv.push_back(make_pair(word, i));
	}
	
	for(auto p : pv) {
		cout << p.first << " " << p.second << endl;
	}
	
	return 0;
}