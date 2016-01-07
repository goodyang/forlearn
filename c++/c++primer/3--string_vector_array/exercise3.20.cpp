#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	int ival;
	vector<int> v;
	while(cin >> ival) {
		v.push_back(ival);
	}
	
	for(int &i : v) {
		cout << i << " ";
	}
	cout << endl;
	for(int i=0; i<v.size()-1; i++) {
		cout << " " << v[i] + v[i+1];
	}
	cout << endl;
	
	for(int i=0; i<(v.size()+1)/2; i++) {
		cout << " " << v[i] + v[v.size()-i-1];
	}
	cout << endl;
	
	return 0;
}