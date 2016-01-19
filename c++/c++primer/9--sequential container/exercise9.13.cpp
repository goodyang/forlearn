#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main()
{
	list<int> l={1,2,3,4,5};
	vector<double> v(l.begin(),l.end());
	
	for(auto &d : v){
		cout << d << " ";
	}
	cout << endl;
	
	list<char *> clist = {"My","name","is","saga"};
	vector<string> sv(clist.begin(),clist.end());
	for(auto s : sv) cout << s << " ";
	cout << endl;
	
	vector<string> sv1;
	sv1.assign(clist.begin(),clist.end());
	for(auto s : sv1) cout << s << " ";
	cout << endl;
	
	vector<string> sv2;
	swap(sv2,sv1);
	for(auto s : sv2) cout << s << " ";
	cout << endl;
	
	return 0;
}