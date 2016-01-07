#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<string> text;
	string s;
	cout << "Enter text content :";
	while (cin >> s && s != "0") {
		text.push_back(s);
	}
	cout << endl;

	cout << "Enter the word your seach :" << endl;
	string sought;
	cin >> sought;
	cout << sought << endl;

	auto beg = text.begin(), end = text.end();
	auto mid = beg + (end - beg) / 2;

	while (mid != end){
		if (*mid == sought) {
			cout << "Find it!" << endl;
			return 0;
		}
		else if (sought < *mid) {
			end = mid;
		}
		else {
			beg = mid;
		}
		mid = beg + (end - beg) / 2;
	}
	cout << "Not found" << endl;
	return -1;
}