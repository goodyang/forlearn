#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
int main()
{
	/**multimap<string, string> families = {
		{"gao", "yuan"},
		{"gao", "yang"},
		{"gao", "cong"}
	};**/
	map<string, vector<string>> families = {{"gao",{"yuan", "yang", "cong"}}}; 
	string firstname;
	string lastname;
	while(cin >> firstname >> lastname){
		families[firstname].push_back(lastname);
		//families.insert(pair<string, string>(firstname, lastname));
	}
	
	for(auto & name : families){
		cout << name.first << endl;
		for(auto last : name.second){
			cout << last << " ";
		}
		cout << endl;
	}
	
	/**auto it = families.cbegin();
	while(it != families.cend()) {
		cout << it->first << " " << it->second << endl;;
		it++;
	}**/
	
	return 0;
}