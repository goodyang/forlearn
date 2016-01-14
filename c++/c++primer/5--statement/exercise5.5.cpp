#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
int main()
{
	const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
	string lettergrade;
	
	int grade;
	while(cin >> grade) {
		/**if(grade < 60) {
			lettergrade = scores[0];
		}else {
			lettergrade = scores[(grade - 50)/10];
		}**/
		lettergrade = grade<60?scores[0]:scores[(grade - 50)/10];
		cout << lettergrade << endl;
	}
	
	return 0;
}