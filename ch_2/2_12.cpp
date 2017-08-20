#include<iostream>
#include<string>
using std::cout; using std::endl;

int main() {
	
	// (a) : int double = 3.14;  double is a reserved name
    // (b) : 
	         int _;  // ok
    // (c) : int catch-22; error : '-' in name
	// (d) : int 1_or_2 = 1; error : name started with number
	// (e) : 
			 double Double = 3.14; // ok

	cout << endl << endl;
	return 0;
}