#include <iostream>
#include <string>
#include "StrVec.h"
using namespace std;

int main()
{
	StrVec sv({"saga", "kobe", "michael"});
	//sv.push_back("saga");
	//sv.push_back("kobe");
	//sv.push_back("michael");
	
	cout << sv.size() << "\n";
	auto beg = sv.begin();
	while(beg != sv.end()){
		cout << *beg++ << " ";
	}
	cout << endl;
	
}