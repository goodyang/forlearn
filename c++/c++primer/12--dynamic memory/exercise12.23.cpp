#include <iostream>
#include <string>
using namespace std;

int main()
{
	char *constring = new char[255]();
	strcat(constring, "kobe ");
	strcat(constring, "byrant");
	cout << constring << endl;
	delete[] constring;
	
	string s1 = {"kobe "};
	string s2 = {"byrant"};
	cout << s1 + s2 << endl;
	
	return 0;
}