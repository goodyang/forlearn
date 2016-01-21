#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <list>
using namespace std;
int main()
{
	vector<string> sv;
	string word;
	while(cin >> word){
		if(find(sv.begin(), sv.end(), word) == sv.end()){
			sv.push_back(word);
		}
	}
	
	for(auto &s : sv) {
		cout << s << endl;
	}
	
	map<string, list<int>> word_line;
	
	map<vector<int>::iterator, int> imap;
	map<list<int>::iterator, int> lmap;
	
	vector<int> iv;
	imap.insert(pair<vector<int>::iterator,int>(iv.begin(), 0));
	
	list<int> lv;
	//lmap.insert(pair<list<int>::iterator, int>(lv.begin(), 0));
	
	
	return 0;
}