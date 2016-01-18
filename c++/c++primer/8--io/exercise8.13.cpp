#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>

struct PersonInfo {
	std::string name;
	std::vector<std::string> phones;
};
bool valid(const std::string num)
{
	if(num[0]=='2'||num[0]=='8'){
		return true;
	}else
		return false;
}
int main()
{
	std::string line, word;
	std::vector<PersonInfo> people;
	std::istringstream record;
	std::ifstream in("data/peopleinfo.txt");
	while(getline(in, line)){
		record.clear();//reset state 
		record.str(line);
		PersonInfo p;
		record >> p.name;
		while(record >> word){
			p.phones.push_back(word);
		}
		people.push_back(p);
	}
	
	/**for(PersonInfo &p : people){
		std::cout << p.name << "\t";
		for(auto &phone : p.phones){
			std::cout << phone << "\t";
		}
		std::cout << std::endl;
	}**/
	
	for(const auto &enty : people) {
		std::ostringstream formated, badNums;
		for(const auto &nums : enty.phones) {
			if(!valid(nums)){
				badNums << " " << nums;
			}else
				formated << " " << nums;
		}
		if(badNums.str().empty())
			std::cout << enty.name << " " << formated.str() << std::endl;
		else
			std::cerr << "input error: " << enty.name
						<< " invalid number(s) " << badNums.str() << std::endl;
	}
	
	
	return 0;
}