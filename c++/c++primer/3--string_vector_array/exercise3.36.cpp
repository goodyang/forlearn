#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int main()
{
	int iarr[] = {0,1,2,3,4};
	vector<int> v(iarr, iarr+5);
	for(auto i : v) cout << i << " ";
	cout << endl;
	//----------------
	int arr2[5] = {};
	int index = 0;
	for(auto i : v) {
		*(arr2+index) = i;
		index++;
	}
	for(auto i : arr2) cout << i << " ";
	cout << endl;
	return 0;
}