#include <iostream>
using namespace std;
int main()
{
	int number = 10;
	auto fun = [&number]()->bool{if(number!=0){--number;} return number==0?true:false;};
	for(auto i=0;i<12;i++){cout << fun() << endl;}
	return 0;
}