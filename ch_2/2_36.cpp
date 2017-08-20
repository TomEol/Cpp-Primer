#include<iostream>
using std::cout; using std::endl;
#include <boost/type_index.hpp>

using boost::typeindex::type_id_with_cvr;

int main() {

	int a = 3, b = 4;
	decltype(a) c = a;    // int
	decltype((b)) d = a;  // int &

	++c;
	++d;

	cout << endl << " a " << type_id_with_cvr<decltype(a)>().pretty_name();
	cout << endl << " b " << type_id_with_cvr<decltype((b))>().pretty_name();


	cout << endl << endl;
	return 0;
}
