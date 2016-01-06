#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item currentItem, item;
	if(std::cin >> currentItem) {
		int cnt = 1;
		while(std::cin >> item) {
			if(item.isbn() == currentItem.isbn()) {
				cnt++;
			}else {
				std::cout << currentItem.isbn() << " occurs " << cnt << " times" << std::endl;
				currentItem = item;
				cnt = 1;
			}
		}
		std::cout << currentItem.isbn() << " occurs " << cnt << " times" << std::endl;
	}
	return 0;
}