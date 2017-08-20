#include <iostream>
using std::cout; using std::endl;


int main() {
	int firstNum = 0, secondNum = 0;
	cout << "Enter the first and second num -> ";
	std::cin >> firstNum >> secondNum;
	cout << endl;
	while (firstNum <= secondNum) {
		cout << firstNum++ << "\t";
	}
	cout << endl;
	return 0;
}