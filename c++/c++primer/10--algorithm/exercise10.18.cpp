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
string make_plural(size_t ctr, const string &word, const string &ending)
{
	return (ctr>1)?word+ending:word;
}
void biggies(vector<string> &words, vector<string>::size_type sz)
{
	elimDups(words);
	stable_sort(words.begin(), words.end(), 
		[](const string &s1, const string &s2){return s1.size()<s2.size();});
	cout << "satable_sort.......\t";
	for_each(words.begin(), words.end(), [](const string &s){cout << s << " ";});
	cout << endl;
	auto iter = stable_partition(words.begin(), words.end(), 
		[sz](const string &s){return s.size() < sz;});
	auto count = words.end()-iter;
	cout << count << " " << make_plural(count, "word", "s")
		<< " of length " << sz << " or longer " << endl;
	for_each(iter, words.end(), [](const string &s){cout << s << " ";});
}

int main()
{
	vector<string> words;
	string word;
	while(cin >> word) words.push_back(word);
	cout << "input over.......\t";
	for_each(words.begin(), words.end(), [](const string &s){cout << s << " ";});
	cout << endl;
	biggies(words, 5);
	return 0;
}