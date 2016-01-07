#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<unsigned> scores(11, 0);
	unsigned grade;
	auto beg = scores.begin();
	while(cin >> grade) {
		++(*(beg+grade/10));
	}
	
	while(beg != scores.end()) {
		cout << *beg << " ";
		++beg;
	}
	cout << endl;
	
	return 0;
}