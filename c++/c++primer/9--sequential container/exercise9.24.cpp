#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<char> v({'d'});
	cout << v[0] << endl;
	cout << v.at(0) << endl;
	cout << v.front() << endl;
	cout << *v.begin() << endl;

	return 0;
}