#include <iostream>
#include <string>
using namespace std;
int main()
{
	string numbers("0123456789");
	string alphabet("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
	string our_str("ab2c3d7R4E6");
	string::size_type pos = 0;
	while((pos=our_str.find_first_of(numbers,pos))!=string::npos){
		cout << our_str[pos] << " ";
		pos++;
	}
	cout << endl;
	pos = 0;
	while((pos=our_str.find_first_of(alphabet,pos))!=string::npos){
		cout << our_str[pos] << " ";
		pos++;
	}
	cout << endl;
	pos = 0;
	while((pos=our_str.find_first_not_of(alphabet,pos))!=string::npos){
		cout << our_str[pos] << " ";
		pos++;
	}
	cout << endl;
	pos = 0;
	while((pos=our_str.find_first_not_of(numbers,pos))!=string::npos){
		cout << our_str[pos] << " ";
		pos++;
	}
	cout << endl;

	return 0;
}