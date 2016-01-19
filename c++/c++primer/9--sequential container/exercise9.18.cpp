#include <iostream>
#include <deque>
#include <string>
#include <list>

using namespace std;

int main()
{
	list<string> sdq;
	string word;
	while(cin >> word){
		sdq.push_back(word);
	}

	auto beg = sdq.begin();
	while(beg != sdq.end()) {
		cout << *beg << endl;
		beg++;
	}

	return 0;
}