#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<int> iv = {0,1,2,3,4,5,6,7,8,9};
	cout << accumulate(iv.begin(), iv.end(), 0) << endl;
	vector<double> dv = {0,1,2,3,4,5,6,7,8,9.5};
	cout << accumulate(dv.cbegin(), dv.cend(), 0) << endl;

	vector<char *>roster1({"i", "am", "a", "programmer"});
	vector<char *>roster2({"i", "am", "a", "programmers"});
	cout << equal(roster1.cbegin(), roster1.cend(), roster2.cbegin()) << endl;
	return 0;
}