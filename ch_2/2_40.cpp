#include <iostream>
using std::cout; using std::endl;

class Sales_data {
public:
	Sales_data() :bookNo(""), units_sold(0), revenue(0.0) {}
private:
	std::string bookNo;
	unsigned units_sold;
	double revenue;
};

int main() {

	Sales_data s_data;

	cout << endl << endl;
	return 0;
}