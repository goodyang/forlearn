#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>

class Sales_data {
	friend Sales_data add(const Sales_data&, const Sales_data&);
	friend std::ostream &print(std::ostream&, const Sales_data&);
	friend std::istream &read(std::istream&, Sales_data&);
public:
	Sales_data(const std::string &s, unsigned n, double p):
		bookNo(s), units_sold(n), revenue(p*n){}
	Sales_data() : Sales_data("", 0, 0) {}
	Sales_data(const std::string &s) : Sales_data(s, 0, 0){};
	Sales_data(std::istream& is) : Sales_data(){read(is, *this);}
	
	std::string isbn() const {return bookNo;}
	Sales_data& combine(const Sales_data&);
private:
	double avg_price() const;
	
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

inline 
double Sales_data::avg_price() const 
{
	if(units_sold != 0){
		return revenue / units_sold;
	}else{
		return 0;
	}
}

std::istream &read(std::istream& is, Sales_data &s)
{
	double price;
	is >> s.bookNo >> s.units_sold >> price;
	s.revenue = price * s.units_sold;
	return is;
}
std::ostream &print(std::ostream& os, const Sales_data &s)
{
	os << s.isbn() << "\t" << s.units_sold << "\t" << s.revenue ;
	return os;
}
Sales_data add(const Sales_data& lhs, const Sales_data& rhs)
{
	Sales_data new_lhs(lhs);
	new_lhs.combine(rhs);
	return new_lhs;
}
#endif
