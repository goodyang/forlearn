#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
int main()
{
	vector<int> v = {0,1,2,3,4,5,6,7};
	/**auto beg = v.begin();
	while(beg != v.end()) {
		cout << *beg << " ";
		*beg = (*beg%2==0)?(*beg):((*beg)*2);
		beg++;
	}**/
	for(auto &i : v) {
		cout << i << " ";
		i = (i%2)?(i*2):i;
	}
	cout << endl;
	
	/**beg = v.begin();
	while(beg != v.end()) {
		cout << *beg++ << " ";
	}**/
	for(auto &i : v) {
		cout << i << " ";
	}
	cout << endl;
	return 0;
}