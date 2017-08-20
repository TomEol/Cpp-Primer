#include<iostream>
using std::cout; using std::endl;

int main() {

	int i = 0, &r = i;
	const int ci = i, &cr = ci;

	auto a = r;         // int
	auto b = ci;        // int
	auto c = cr;        // int
	auto d = &i;        // int *
	auto e = &ci;       // const int *
	const auto f = ci;  // const int
	auto &g = ci;       // const int &

	cout << "a: before = " << a;
	a = 42;  
	cout << "\tafter = " << a << endl;
	cout << "b: before = " << b;
	b = 42;  
	cout << "\tafter = " << b << endl;
	cout << "c: before = " << c;
	c = 42; 
	cout << "\tafter = " << c << endl;
	cout << "d: before = " << d;
	//d = 42;  // Error
	cout << "\tafter = " << d << endl;
	cout << "e: before = " << e;
	//e = 42;  // Error
	cout << "\tafter = " << e << std::endl;
	cout << "f: before = " << f;
	//f = 42;  // Error
	cout << "\tafter = " << f << endl;
	cout << "g: before = " << g;
	//g = 42;  // Error
	cout << "\tafter = " << g << endl;

	cout << endl << endl;
	return 0;
}
