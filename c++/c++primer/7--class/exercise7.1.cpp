#include <iostream>
#include "Sales_data.h"

using namespace std;
int main()
{
	Sales_data total;
	if(cin >> total.bookNo >> total.units_sold >> total.revenue){
		Sales_data trans;
		while(cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
			if(trans.bookNo == total.bookNo){
				total.units_sold += trans.units_sold;
				total.revenue += trans.revenue;
			}else{
				cout << total.bookNo << "\t" 
					 << total.units_sold << "\t" 
					 << total.revenue << endl;
				total = trans;
			}
		}
		cout << total.bookNo << "\t" 
					 << total.units_sold << "\t" 
					 << total.revenue << endl;
	}else{
		cerr << "No data?!" << endl;
	}
}