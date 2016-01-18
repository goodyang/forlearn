#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <assert.h>

struct PersonInfo {
	std::string name;
	std::vector<std::string> phones;
};

int main()
{
	std::string line, word;
	std::vector<PersonInfo> people;
	std::istringstream record;
	while(getline(std::cin, line)){
		record.clear();//reset state 
		record.str(line);
		PersonInfo p;
		record >> p.name;
		while(record >> word){
			p.phones.push_back(word);
		}
		people.push_back(p);
	}
	assert(people.size()!=0);
	for(PersonInfo &p : people){
		std::cout << p.name << "\t";
		for(auto &phone : p.phones){
			std::cout << phone << "\t";
		}
		std::cout << std::endl;
	}
	return 0;
}