#include<iostream>
using std::cout; using std::endl;

int main() {

	const int buf;    // for constant data need initialization
	int cnt = 0;
	const int sz = cnt;

	++cnt;
	++sz;             // cannot change const data

	cout << endl << endl;
	return 0;
}