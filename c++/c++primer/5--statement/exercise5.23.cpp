#include <iostream>
#include <stdexcept>
#include <exception>
using std::cout;using std::cin;using std::endl;
using std::runtime_error;using std::exception;
int main()
{
	int m, n;
	while(cin >> m >> n){
		try{
			if(n == 0)
				throw runtime_error("divisor is 0!");
			cout << m/n << endl;
		}catch(runtime_error err){
			cout << err.what() << "\nTry again? Enter y or n" << endl;
			char c;
			cin >> c;
			if(!cin || c == 'n') {
				break;
			}
		}
	}
	
	return 0;
}