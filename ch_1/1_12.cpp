#include <iostream>
using std::cout; using std::endl;


int main() {
	int sum = 0;
	
	for (int i = -100; i <= 100; ++i) {
		sum += i;
	}
	// it's cycle from -100 to 100 , and at the end sum will equal 0

	cout << endl;
	return 0;
}