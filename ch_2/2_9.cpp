#include<iostream>
#include<string>
using std::cout; using std::cin; using std::endl;

int main() {

	// (a) 
	//     cin >> int input_value; - error : because variable must be defined before
	// (b)
	//     int i = { 3.14 }; - error : lost information in initializer_list
		   double i_d = { 3.14 }; 
   //  (c)
   //      double salary = wage = 999.99;  -  we dont know - wage 
		   double wage = 2.2;
		   double salary = wage = 999.99;
   //  (d)
		   int i = 3.14; // just lost 0.12 , i == 3


	cout << endl << endl;
	return 0;
}