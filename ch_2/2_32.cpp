#include<iostream>
using std::cout; using std::endl;

int main() {

	//int null = 0, *pi = null; // 'initializing': cannot convert from 'int' to 'int *'	
	//but you can do in such way :

	const int null = 0; 
	int *pi = null;

	// or 

	int *p2 = nullptr;

	// or 

	constexpr int nuLL = 0;
	int *p3 = nuLL;

	cout << endl << endl;
	return 0;
}
