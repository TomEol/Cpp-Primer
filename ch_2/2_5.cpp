#include<iostream>
#include<string>
using std::cout; using std::cin; using std::endl;

int main() {

	char a1 = 'a';
	wchar_t b2 = L'a';
	std::string  d3 = "a";
	const wchar_t *c4 = L"a";

	int a2 = 10;
	unsigned int b2 = 10u;
	long c2 = 10L;
	unsigned long int d1 = 10uL;
	int e1 = 012; // octal integral literal
	int f1 = 0xC; // hexadecimal integral literal

	double a3 = 3.14;
	float b3 = 3.14f;
	long double c3 = 3.14L;

	int a4 = 10;
	unsigned int b4 = 10u;
	double c4 = 10.;
	double d4 = 10e-2;

	cout << endl;
	return 0;
}