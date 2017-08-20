#include <iostream>
#include "Sales_data.h"
using std::cout; using std::cin; using std::endl;

void exercise_1_20() {
	Sales_data item;
	double price = 0;
	while (std::cin >> item) {
		cout << item;
	}
}
int exercise_1_21() {
	Sales_data d1, d2;
	if (cin >> d1) {
		if (cin>>d2) {
			if (d1 == d2) {
				unsigned totalSold = d1.getUnits_sold() + d2.getUnits_sold;
				double totalRevenue = d1.getRevenue() + d2.getRevenue();
				cout << d1.isbn() << " " << totalSold << " " << totalRevenue << " ";
				if (totalSold != 0)
					cout << totalRevenue / totalSold << endl;
				else
					cout << "(no sales)" << std::endl;
			}
			else {
				   std::cerr << "Data must refer to the same ISBN!" << endl;
				return -1;
			}
		}
		else {
			std::cerr << "No data for item two!" << endl;
			return -1;
		}
	}
	else {
		std::cerr << "No data for item one!" << endl;
		return -1;
	}return 0;
}
int exercise_1_22() {
	Sales_data total, d;
	if (cin>>total) {
		while (cin>>d) {
			if (total == d) {
				total += d;
			}
			else {
				cout << total;
				if (total.getUnits_sold() != 0)
					cout << total.getRevenue() / total.getUnits_sold() << endl;
				else
					cout << "(no sales)" << endl;
				total = d;
			}
		}
		cout << total << " ";
		if (total.getUnits_sold() != 0)
			cout << total.getRevenue() / total.getUnits_sold() << endl;
		else
			cout << "(no sales)" << endl;
	}
	else {
		std::cerr << "No data for item!" << endl;
		return -1;
	}
	return 0;
}
int exercise_1_23() {
	Sales_data total, d;
	if (cin >> total) {
		int cnt = 1;
		while (cin >> d) {
			if (total == d) {
				++cnt;
			}
			else {
				cout << total.isbn() << " " << cnt << endl;
				total = d;
				cnt = 1;
			}
		}
		cout << total.isbn() << " " << cnt << endl;
	}
	else {
		std::cerr << "No data for item!" << endl;
		return -1;
	}
	return 0;
}

int main() {
	return 0;
}