#include <iostream>
#include <vector>
using std::cout;using std::endl;using std::cin;
using std::vector;
bool func(vector<int>::iterator beg, vector<int>::iterator end, int val)
{
	while(beg != end){
		if(*beg == val)
			return true;
		beg++;
	}
	
	return false;
}

int main()
{
	vector<int> v={2,5,8,10};
	int val;
	cout << "please enter your number:";
	cin >> val;
	if(func(v.begin(), v.end(), val)){
		cout << "Yes!" << endl;
	}else
		cout << "NO!" << endl;
	return 0;
}