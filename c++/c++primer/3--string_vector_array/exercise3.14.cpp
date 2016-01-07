#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{
	int val;
	vector<int> v;
	while(cin >> val){
		v.push_back(val);
	}
	for(int i = 0; i < v.size(); i++){
		cout << v[i] <<" ";
	}
	cout << endl;
	return 0;
}