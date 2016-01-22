#include <iostream>
#include <fstream>
#include "StrBlob.h"
using namespace std;
int main()
{
	ifstream input("data/testdata");
	string line;
	StrBlob blob;
	while(getline(input, line)){
		blob.push_back(line);
	}
	
	StrBlobPtr blob_p = blob.begin();
	
	while(blob_p != blob.end())
	{
		cout << blob_p.deref() << endl;
		blob_p.incr();
	}
	
	return 0;
}