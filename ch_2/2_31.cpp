#include<iostream>
using std::cout; using std::endl;

int main() {

	int i;
	const int v2 = 0;
	int v1 = v2;
	int *p1 = &v1, &r1 = v1;
	const int *p2 = &v2, *const p3 = &i, &r2 = v2;

	r1 = v2;
	p1 = p2; // error - '=': cannot convert from 'const int *' to 'int *'	
	p1 = p3; // error - '=': cannot convert from 'const int *const ' to 'int *'	
	p2 = p1;
	p2 = p3;

	cout << endl << endl;
	return 0;
}
