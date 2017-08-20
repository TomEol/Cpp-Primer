#include<iostream>
using std::cout; using std::endl;

int main() {

	//============================================= 2_18
	double someValue = 77.77, temp = 99.099;
	double *p_someValue = &someValue;

	cout << " &p_someValue = " << p_someValue << " *p_someValue = " << *p_someValue << endl;
	cout << " &someValue = " << &someValue << " someValue = " << someValue << endl;

	*p_someValue = 55.55;

	cout << " &p_someValue = " << p_someValue << " *p_someValue = " << *p_someValue << endl;
	cout << " &someValue = " << &someValue << " someValue = " << someValue << endl;

	p_someValue = &temp;
	cout << " &p_someValue = " << p_someValue << " *p_someValue = " << *p_someValue << endl;
	cout << " &temp = " << &temp << " temp = " << temp << endl;

	//====================================== 2_19
	// A pointer is an object whose value is the adress of another object.
	// A reference is not an object.It is an alias of another object.
	// A reference can nor change the object referenced by

	//=========================================== 2_20
	int i = 42;      // create i with value 42
	int *pi = &i;    // create point to int i
	*pi = *pi * *pi; // changes the value of the pointer : i = i * i;

	//=========================================== 2_21
	int i1 = 0;
	double &dp = &i1; // can not hold address to int
	int *ip = i;      // can hold only address
	int *p = &i;



	cout << endl << endl;
	return 0;
}