#include <iostream>
#include <fstream>
#include "Sales_data.h"

using namespace std;

int main(int argc, char *argv[])
{
	ifstream in(argv[1]);
	Sales_data total;
	if(read(in, total)){
		Sales_data trans;
		while(read(in, trans)) {
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