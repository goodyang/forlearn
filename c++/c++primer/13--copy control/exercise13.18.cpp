#include <iostream>
#include <string>

using namespace std;

class Employee {
	public:
		Employee (){
			number = increase_number++;
		}
		Employee(const string &s){
			name = s;
			number = increase_number++;
		}
		Employee(const Employee& e) = delete;
		Employee& operator=(const Employee&) = delete;
		int id() const { return number;}
	private:
		int number;
		string name;	
		static int increase_number;
};
int Employee::increase_number = 0;


int main()
{
	Employee e1;
	Employee e2;
	cout << e1.id() << endl;
	cout << e2.id() << endl;
	
	return 0;
}