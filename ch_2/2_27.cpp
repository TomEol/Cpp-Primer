#include<iostream>
using std::cout; using std::endl;

int main() {

	{//a
		//int i = -1, &r = 0; // a nonconst reference cannot be initialized to a literal  
	}
	{//b
		int i2;
		int *const p2 = &i2;
	}
	{//c and d
		const int i = -1, &r = 0;
	}
	{//d
		int i2;
		const int *const p3 = &i2;
	}
	{//e
		int i2;
		const int *p1 = &i2;
	}
	{//f
		const int &const r2;// need initialize this
	}
	{//g
		int i;
		const int i2 = i, &r = i;
	}



	cout << endl << endl;
	return 0;
}