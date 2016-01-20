#include <iostream>
#include <algorithm>
#include <iterator>
#include <fstream>
#include <vector>
using namespace std;

void func(const string input, const string out1, const string out2)
{
	ifstream ifs(input);
	ofstream ofs1(out1), ofs2(out2);
	istream_iterator<int> in_iter(ifs), eof;
	ostream_iterator<int> out_iter1(ofs1, " ");
	ostream_iterator<int> out_iter2(ofs2, "\n");
	while(in_iter != eof){
		if(*in_iter&0x1){
			*out_iter1++ = *in_iter++;
		}else{
			*out_iter2++ = *in_iter++;
		}
	}
}

int main()
{
	func("data/test_int", "data/out1", "data/out2");
	return 0;
}