#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <functional>
using namespace std::placeholders;
using namespace std;
void elimDups(vector<string> &words)
{
	sort(words.begin(), words.end());	
	words.erase(unique(words.begin(), words.end()), words.end());	
}
string make_plural(size_t ctr, const string &word, const string &ending)
{
	return (ctr>1)?word+ending:word;
}
bool check_size(const string &s, string::size_type sz)
{
	return s.size() < sz;
}
void biggies(vector<string> &words, vector<string>::size_type sz)
{
	elimDups(words);
	
	auto iter = stable_partition(words.begin(), words.end(), bind(check_size, _1, sz));	
	for_each(words.begin(), words.end(), [](const string &s){cout << s << " ";});
	cout << endl;
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