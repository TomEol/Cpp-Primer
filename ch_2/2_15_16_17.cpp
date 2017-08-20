#include<iostream>
using std::cout; using std::endl;

int main() {

    //======================================================================== 2_15
	int ival = 1.01;
	//int &rval1 = 1; // when you reference to noname data need const int val1
	int &rval2 = ival;
	//int &rval3;        // must be initialized when defined

	//======================================================================== 2_16
	int i = 0, &r1 = i;
	double d = 0, &r2 = d;

	r2 = 3.14; // d = 3.14
	r2 = r1;   // d = i

	i = r2;    // i = d
	r1 = d;    // i = d

    //======================================================================== 2_17
	int i1, &ri = i1; // some unknown value
	i1 = 5; 
	ri = 10;
	//i == ri == 10 

	cout << i1 << " " << ri;


	cout << endl << endl;
	return 0;
}