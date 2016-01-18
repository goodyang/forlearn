#include <iostream>
#include <fstream>
#include "Sales_data.h"

using namespace std;

int main(int argc, char *argv[])
{
	ifstream in(argv[1]);
	ofstream out(argv[2], ofstream::app);
	Sales_data total;
	if(read(in, total)){
		Sales_data trans;
		while(read(in, trans)) {
			if(trans.isbn() == total.isbn()){
				total = add(total, trans);
			}else{
				print(out, total) << endl;
				total = trans;
			}
		}
		print(out, total) << endl;;
	}else{
		cerr << "No data?!" << endl;
	}
}