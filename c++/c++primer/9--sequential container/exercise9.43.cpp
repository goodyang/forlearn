#include <iostream>
#include <string>

using namespace std;
void func(string &s, const string oldVal, const string newVal){
	auto beg = s.begin();
	int offset = 0;
	while(beg!=s.end()){
		if(*beg==oldVal[0]){
			int index = 1;
			while(index<oldVal.size()&&*(beg+index) == oldVal[index]){
				index++;
			}
			if(index == oldVal.size()){	
				s.insert(beg,newVal.begin(), newVal.end());
				s.erase(offset+newVal.size(), oldVal.size());
				offset += newVal.size();
				beg = s.begin()+offset;
				continue;
			}
		}
		beg++;
		offset++;
	}
}
void func2(string &s, const string oldVal, const string newVal){
	auto beg = s.begin();
	int offset = 0;
	while(beg!=s.end()){
		if(*beg==oldVal[0]){
			int index = 1;
			while(index<oldVal.size()&&*(beg+index) == oldVal[index]){
				index++;
			}
			if(index == oldVal.size()){		
				s.replace(offset, oldVal.size(), newVal);
				offset += newVal.size();
				beg = s.begin()+offset;
				continue;
			}
		}
		beg++;
		offset++;
	}
}
int main()
{
	string s = "tho she is a girl, tho";
	func(s, "tho", "thoungh");
	cout << s << endl;
	string s2 = "thru she is a girl, thru";
	func2(s2, "thru", "thoungh");
	cout << s2 << endl;
	return 0;
}