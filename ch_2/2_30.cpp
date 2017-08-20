#include<iostream>
using std::cout; using std::endl;

int main() {

	int i;
	const int v2 = 0; 
	int v1 = v2;
	int *p1 = &v1, &r1 = v1;
	const int *p2 = &v2, *const p3 = &i , &r2 = v2;

	// v2 has top-level const
	// p2 - low-level
	// p3 - top and low level
	// r2 - low level

	cout << endl << endl;
	return 0;
}