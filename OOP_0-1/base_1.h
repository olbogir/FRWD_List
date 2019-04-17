#ifndef BASE_1_H
#define BASE_1_H

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
#define xxxx '\n'
#define xxxz '\n'<<'\n'

class Base_1
{
private:

public:
	string bookNo;
	unsigned units_sold;
	double revenue;
	double avgPrice() const;
public:
	Base_1() = default;
	Base_1(const string &s, unsigned n, double p);
	Base_1(const string &s);
	Base_1(std::istream&);
	Base_1(const Base_1&);
	Base_1 &combine(const Base_1&);
	string isbn() const;

	friend Base_1 add(const Base_1&, const Base_1&);
	friend std::ostream &print(std::ostream&, const Base_1&);
	std::istream &read(std::ostream&, const Base_1&);
	friend std::ostream &operator <<(std::ostream &, const Base_1 &);

};

Base_1 add(const Base_1&, const Base_1&);
std::ostream &print(std::ostream&, const Base_1&);
std::istream &read(std::ostream& , const Base_1& );

std::ostream &operator <<(std::ostream &, const Base_1&);

#endif // BASE_1_H
