#include "base_1.h"

Base_1::Base_1(const std::string&s, unsigned n, double p):bookNo(s), units_sold(n), revenue(p*n)
{

}

Base_1::Base_1(const std::string&s): bookNo(s)
{

}

Base_1::Base_1(std::istream& is)
{
	read(is, *this);
}

Base_1::Base_1(const Base_1& orig): bookNo(orig.bookNo), units_sold(orig.units_sold), revenue(orig.revenue)
{

}

Base_1&Base_1::combine(const Base_1& rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

std::string Base_1::isbn() const
{
	return this->bookNo;
}




double Base_1::avgPrice() const
{
	return units_sold ? revenue/units_sold : 0;
}


Base_1 add(const Base_1& lhs, const Base_1&rhs)
{
	Base_1 sum = lhs;
	sum.combine(rhs);
	return sum;
}

std::ostream&print(std::ostream& os, const Base_1& item)
{
	os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avgPrice();
	return os;
}

std::istream &read(std::istream& is, const Base_1& item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}

std::ostream&operator <<(std::ostream&os, const Base_1&item)
{
	os << item.isbn() << " " << item.units_sold << item.revenue << item.avgPrice();
	return  os;
}
