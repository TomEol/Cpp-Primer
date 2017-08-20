#include <iostream>
using std::cout; using std::endl;


int main() {
	int sum = 0;

	for (int i = 50; i <= 100; ++i){
		sum += i;
	}
	cout << endl;
	for (int i = 0; i <= 10; ++i){
		cout << i << " ";
	}
	cout << endl;
	for (int i = 10; i >= 0; --i){
		cout << i << " ";
	}	
	cout << "\nsum = " << sum << endl;
	cout << endl;
	return 0;
}