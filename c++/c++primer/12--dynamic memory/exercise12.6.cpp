#include <iostream>
#include <vector>
using namespace std;
vector<int>* get_v()
{
	vector<int> *iv = new vector<int>();
	return iv;
}
void read_int(vector<int> *iv)
{
	int i;
	while(cin >> i)
		iv->push_back(i);
}
void print_int(vector<int> *iv)
{
	for(auto &i : (*iv))
	{
		cout << i << " ";
	}
	cout << endl;
}
int main()
{
	vector<int> *iv = get_v();
	read_int(iv);
	print_int(iv);
	delete iv;
	return 0;
} 