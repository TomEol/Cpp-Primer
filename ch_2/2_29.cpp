#include<iostream>
using std::cout; using std::endl;

int main() {

	int i, *const cp = &i; 
	const int ic = 7 , &r = ic;
	const int *p;
	int *pl, *const p2 = &i; 
	const int *const p3 = &ic;

	// i = ic - ok
	//p1 = p3; p1 = &ic;             - Error: low-level const doesn't match
	//p3 = &ic;  p2 = p1;  ic = *p3; - Error: cannot assign value to a const variable

	cout << endl << endl;
	return 0;
}