#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
void elimDups(vector<string> &words)
{
	sort(words.begin(), words.end());
	cout << "sort......\t\t";
	for(auto &w : words) cout << w << " ";
	cout << endl;
	auto dupiter = unique(words.begin(), words.end());
	cout << "unique......\t\t";
	for(auto &w : words) cout << w << " ";
	cout << endl;
	words.erase(dupiter, words.end());
	cout << "erase.......\t\t";
	for(auto &w : words) cout << w << " ";
	cout << endl;
}
bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}
int main()
{
	vector<string> words;
	string word;
	while(cin >> word) words.push_back(word);
	cout << "input over.......\t";
	for(auto &w : words) cout << w << " ";
	cout << endl;
	elimDups(words);
	stable_sort(words.begin(), words.end(), isShorter);
	cout << "stable_sort.......\t";
	for(auto &w : words) cout << w << " ";
	cout << endl;
	return 0;
}