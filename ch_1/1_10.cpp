#include<iostream>
using std::cout; using std::endl;

int main() {
	int i = 10;
	while (i >= 0) {
		std::cout << i-- << endl;
	}
	std::cout << std::endl;
	return 0;
}