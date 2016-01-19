#include <iostream>
#include <vector>

using namespace std;

int main()
{
	std::vector<char> v;
	cout << v.size() << endl;
	cout << v.capacity() << endl;
	v.push_back('a');
	cout << v.size() << endl;
	cout << v.capacity() << endl;
	v.push_back('a');
	cout << v.size() << endl;
	cout << v.capacity() << endl;
	v.push_back('a');
	cout << v.size() << endl;
	cout << v.capacity() << endl;
	v.shrink_to_fit();
	cout << v.size() << endl;
	cout << v.capacity() << endl;
	v.resize(50);
	cout << v.size() << endl;
	cout << v.capacity() << endl;
	v.reserve(51);
	cout << v.size() << endl;
	cout << v.capacity() << endl;
	return 0;
}