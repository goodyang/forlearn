#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
	if(argv){
		while(*argv)
			cout << *argv++ << endl;
	}
	return 0;
}