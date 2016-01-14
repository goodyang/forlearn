#include <iostream>
#include <vector>
using std::cout;using std::cin;using std::endl;
using std::vector;
int main()
{
	vector<int> v1 = {0,1,1,2};
	vector<int> v2 = {0,1,1,2,3,5,8};
	
	int len;
	if(v1.size() > v2.size()) {
		len = v2.size();
	} else {
		len = v1.size();
	}
	
	bool isPrefix = true;
	for(int i = 0; i < len; i++) {
		if(v1[i] != v2[i]) {
			isPrefix = false;
			break;
		}
	}
	
	if(isPrefix) {
		cout << "yes!" << endl;
	} else {
		cout << "no!" << endl;
	}
	
	return 0;
}