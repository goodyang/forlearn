#ifndef PERSON_H
#define PERSON_H
#include <string>
class Person{
	friend std::istream &read(std::istream&, Person&);
	friend std::ostream &print(std::ostream&, const Person&);
public:
	Person()=default;
	Person(const std::string &n, const std::string &a):
		name(n), address(a){}
	Person(std::istream &is);
private:
	std::string get_name() const {return name;}
	std::string get_address() const {return address;}
	
	std::string name;
	std::string address;
};
std::istream &read(std::istream&, Person&);
std::ostream &print(std::ostream&, const Person&);

Person::Person(std::istream &is)
{
	read(is, *this);
}
std::istream &read(std::istream& is, Person& p)
{
	is >> p.name >> p.address;
	return is;
}
std::ostream &print(std::ostream& os, const Person& p)
{
	os << p.name << "\t" << p.address;
	return os;
}

#endif