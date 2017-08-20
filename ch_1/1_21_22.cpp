#include <iostream>
#include "Sales_item.h"
using std::cout; using std::cin; using std::endl;

int main() {
	//==========================================1_21
	Sales_item item_first, item_second;
	cout << "\n first item -> ";
	cin >> item_first;
	cout << "\n second item -> ";
	cin >> item_second;
	cout << "\n result = " << item_first + item_second;

	//==========================================1_22
	Sales_item itemFirst , itemSecond;
	while (cin >> itemFirst && cin>>itemSecond) {
		cout << "\n First : "<<itemFirst <<"\n Second : "<<itemSecond << endl;
		Sales_item res = itemFirst + itemSecond;
		cout << "\n Result : " << res << endl;
	}
	cout << endl;
	return 0;
}