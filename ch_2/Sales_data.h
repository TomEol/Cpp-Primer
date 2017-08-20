#ifndef SALES_DATA_H 
#define SALES_DATA_H 
#include <string>
#include <fstream>

class Sales_data {
public:
	Sales_data() :bookNo(""), units_sold(0), revenue(0.0) {}

	std::string isbn()const {
		return bookNo;
	}
	unsigned getUnits_sold()const {
		return units_sold;
	}
	double getRevenue()const {
		return revenue;
	}

	void operator+=(const Sales_data &s2) {
		units_sold += s2.units_sold;
		revenue += s2.revenue;
	}
	Sales_data& operator=(const Sales_data &s2) {
		if (this != &s2) {
			bookNo = s2.bookNo;
			units_sold = s2.units_sold;
			revenue = s2.revenue;
		}return *this;
	}
private:
	std::string bookNo;
	unsigned units_sold;
	double revenue;

	friend inline std::istream& operator>>(std::istream &is, Sales_data &sData);
	friend inline std::ostream& operator<<(std::ostream &os, const Sales_data &sData);
};

std::istream& operator>>(std::istream &is, Sales_data &sData) {
	double price = 0;
	is >> sData.bookNo >> sData.units_sold >> price;
	sData.revenue = sData.units_sold * price;
	return is;
}
std::ostream& operator<<(std::ostream &os, const Sales_data &sData) {
	os << sData.bookNo << sData.units_sold << sData.revenue;
	return os;
}
bool operator==(const Sales_data &s1, const Sales_data &s2) {
	return s1.isbn() == s2.isbn() ? true : false;
}

#endif // SALES_DATA_H 