#include <iostream>
#include "Sales_data.h"

using namespace std;
int main()
{
	Sales_data total;
	if(read(cin, total)){
		Sales_data trans;
		while(read(cin, trans)) {
			if(trans.isbn() == total.isbn()){
				total = add(total, trans);
			}else{
				print(cout, total) << endl;
				total = trans;
			}
		}
		print(cout, total) << endl;;
	}else{
		cerr << "No data?!" << endl;
	}
}