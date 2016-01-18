#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

void readFileToVec(const string& fileName, vector<string> &vec)
{
	ifstream ifs(fileName);
	if(ifs){
		string s;
		while(getline(ifs, s)){
			vec.push_back(s);
		}
	}	
}
void readFileToVec_singleword(const string& fileName, vector<string> &vec)
{
	ifstream ifs(fileName);
	if(ifs){
		string s;
		string word;
		while(getline(ifs, s)){
			for(auto ch : s){
				if(!isspace(ch) && !ispunct(ch)){
					word += ch;
				}else{
					vec.push_back(word);
					word = "";
				}
			}
		}
	}	
}
int main()
{
	vector<string> v;
	string filename("data/testdata.txt");
	readFileToVec_singleword(filename, v);
	cout << v.size() << endl;
	for(auto &ts : v){
		cout << ts << "\t";
	}
	cout << endl;
	return 0;
}