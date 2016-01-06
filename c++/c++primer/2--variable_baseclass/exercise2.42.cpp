#include <iostream>
#include <string>
#include "Sales_data.h"
int main() 
{
	Sales_data data1, data2;
	double price = 0;
	std::cin >> data1.bookNo >> data1.units_sold >> price;
	data1.revenue = data1.units_sold * price;
	std::cout << std::endl;
	std::cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = data2.units_sold * price;
	
	std::cout << data1.bookNo << std::endl;
	std::cout << data2.bookNo << std::endl;
	
	if(data1.bookNo == data2.bookNo) {
		unsigned totalCount = data1.units_sold + data2.units_sold;
		unsigned totalRevenue = data1.revenue + data2.revenue;
		
		std::cout << data1.bookNo << " " << totalCount 
				  << " " << totalRevenue << std::endl;
		if(totalCount != 0) {
			std::cout << totalRevenue / totalCount << std::endl;
		} else {
			std::cout << "(no sales)" << std::endl;
		}
		return 0;
	} else {
		std::cerr << "Data must refer to the same ISBN" << std::endl;
		return -1;
	}
}