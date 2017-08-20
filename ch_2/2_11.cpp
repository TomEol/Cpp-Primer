#include<iostream>
using std::cout;  using std::endl;

int main() {
	//extern int ix2 = 1024;  // Error
	int iy2;                  // Definition
	extern int iz2;           // Declaration

	cout << endl << endl;
	return 0;
}