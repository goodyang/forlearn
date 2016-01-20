#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;
int main()
{
	istream_iterator<int> in_iter(cin), eof;
	ostream_iterator<int> out_iter(cout, " ");
	vector<int> iv;
	while(in_iter != eof){
		iv.push_back(*in_iter++);
	}
	sort(iv.begin(), iv.end());
	copy(iv.begin(), iv.end(),out_iter);
	cout << endl;
	unique_copy(iv.begin(), iv.end(), out_iter);
	return 0;
}