#include <iostream>
#include "Sales_item.h"
using std::cout; using std::cin; using std::endl;

int main() {

	//===================================1_23
	Sales_item curItem, item;
	if (cin >> curItem) {
		int cnt = 1;
		while (cin >> item) {
			if (item.isbn() == curItem.isbn())
				++cnt;
			else {
				std::cout << curItem.isbn() << " " << cnt << endl;
				curItem = item;
				cnt = 1;
			}
		}
		cout << curItem.isbn() << " " << cnt << endl;
	}
	//===================================1_24
	  // 5 - 5 - 5 - a 1 10.00
	  // 5 - 5 - 5 - a 2 20.00

	  // 2 - 3 - 4 - b 4 20.00
	  // 2 - 3 - 4 - b 5 30.00

	  // 0 - 0 - 1 - c 6 50.00
	  // 0 - 0 - 1 - c 7 60.00

	cout << endl;
	return 0;
}