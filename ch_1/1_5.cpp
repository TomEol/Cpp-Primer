#include<iostream>
using std::cout; using std::cin; using std::endl;

int main() {
	int firstNum, secondNum;

	cout << "\nEnter first num -> ";
	cin >> firstNum;
	cout << "\nEnter second num -> ";
	cin >> secondNum;

	cout << " first   : " << firstNum << endl;
	cout << " second  : " << secondNum << endl;
	cout << " result  : " << firstNum + secondNum << endl;

	return 0;
}