#include<iostream>
using std::cout; using std::endl;

class Foo {
	// empty
}

int main() {

	// error -   'Foo' followed by 'int' is illegal(did you forget a ';' ? )	
	// error -    return type of 'main' should be 'int' instead of 'Foo'	
    // error -   'return': cannot convert from 'int' to 'Foo'	 

	cout << endl << endl;
	return 0;
}
