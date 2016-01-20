#include <iostream>
#include <iterator>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
int main()
{
	ifstream is("data/elimdups_test");
	istream_iterator<string> in_iter(is), eof;
	vector<string> sv;
	string word;
	while(in_iter != eof){
		sv.push_back(*in_iter++);
	}
	ostream_iterator<string> out_iter(cout, " ");
	for(auto s: sv) *out_iter++ = s;
	cout << endl;

	ifstream is2("data/testdata.txt");
	istream_iterator<string> in_iter2(is2);
	vector<string> sv2(in_iter2, eof);
	for(auto s: sv2) *out_iter++ = s;
	cout << endl;
	return 0;
}