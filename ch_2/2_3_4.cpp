#include<iostream>
#include <limits>
using std::cout; using std::cin; using std::endl;

int main() {
	unsigned u = 10, u2 = 42;
	unsigned int imax = std::numeric_limits<unsigned int>::max();
	// max num in unsigned int imax == 4 294 967 295

	cout << imax << endl;

	cout << u2 - u << endl; //  32
	cout << u - u2 << endl;//   4 294 967 264 - I dont know why ,
	                       //   I thought it would be like this :
	                       //   10 - 42 => 4 294 967 295 - 32 = 4 294 967 263
	
	int i = 10, i2 = 42;

	cout << i2 - i << endl;//    32
	cout << i - i2 << endl;//    -32
	cout << i - u << endl;//     0
	cout << u - i << endl;//     0

	cout << endl;
	return 0;
}