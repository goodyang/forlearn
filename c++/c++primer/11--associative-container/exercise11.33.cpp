#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;
map<string, string> buildMap(ifstream &map_file)
{
	map<string, string> smap;
	string text;
	string first, second;
	while(map_file>>first && getline(map_file, text)){
		smap[first] = text.substr(1, text.find_last_not_of(" ")+1);
	}
	return smap;
}
const string& transform(const string &word, const map<string, string> &trans_map)
{
	auto map_it = trans_map.find(word);
	return map_it != trans_map.cend()?map_it->second:word;
}
void word_transform(ifstream &map_file, ifstream &input)
{
	map<string, string> trans_map = buildMap(map_file);
	string text;
	while(getline(input, text)){
		istringstream stream(text);
		string word;
		bool isfirst = true;
		while(stream >> word){
			if(isfirst)
				isfirst = false;
			else
				cout << " ";
			cout << transform(word, trans_map);
		}
		cout << endl;
	}
}
int main()
{
	ifstream map_file("data/rule");
	ifstream input("data/input");
	word_transform(map_file, input);
	return 0;
}