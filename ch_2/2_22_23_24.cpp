#include<iostream>
using std::cout; using std::endl;

int main() {

	//======================================== 2_22
	int num = 22;
	int *p = &num;

	//if(p)  - check if point is not null.
	//if(*p) - check if value of the point is not null.
	delete p;

	//======================================== 2_23
	//No, you can't. Because it would be expensive to maintain meta data about 
	//what constitutes a valid pointer and what doesn't.
	//But, a smart pointer can tell if it points to a valid object.

	//======================================== 2_24
	int i = 42;
	void *p = &i;  // can hold any address 
	long *ip = &i; // cannot hold int address
	

	cout << endl << endl;
	return 0;
}