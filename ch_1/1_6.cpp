#include<iostream>
using std::cout; using std::endl;

int main() {

	int v1 = 1, v2 = 3;
	
	// It's not legal.
	// The operator << is a member of std::cout, thus cannot be called without 
	// the object std::cout. you can fix it - just delete spaces or add std::cout

	cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << endl;

	// or 

	cout << "The sum of " << v1;
	cout << " and " << v2 << " is ";
	cout << v1 + v2 << endl;

	return 0;
}