#include<iostream>
#include<string>
using std::cout; using std::endl;

int i = 42;

int main() {

	int i = 100;
	int j = i; 

	// j == 100 , because local "i" hide global "i"
	// but if you want global "i" , need add :: before "i" :

	int j2 = ::i;

	cout << endl << endl;
	return 0;
}