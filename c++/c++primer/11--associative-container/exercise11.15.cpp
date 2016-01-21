#include <iostream>
#include <map>
#include <string>
#include <utility>
using namespace std;
int main()
{
	map<string, string> sm = {
		{"gao", "yang"},
		{"shi", "zhimeng"}
	};
	map<string, string>::iterator map_it = sm.begin();
	map_it->second = "yuan";
	for(auto &p : sm){
		cout << p.first << " " << p.second << endl;
	}	
	return 0;
}