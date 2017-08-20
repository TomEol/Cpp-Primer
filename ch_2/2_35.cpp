#include<iostream>
using std::cout; using std::endl;
#include <boost/type_index.hpp>

using boost::typeindex::type_id_with_cvr;

int main() {

	const int i = 42;             // const int
	auto j = i;                   // int 
	const auto &k = i;            // const int &
	auto *p = &i;                 // const int * 
	const auto j2 = i, &k2 = i;   // const int , const int&

	cout << endl << " i " << type_id_with_cvr<decltype(i)>().pretty_name();
	cout << endl << " j " << type_id_with_cvr<decltype(j)>().pretty_name();
	cout << endl << " &k " << type_id_with_cvr<decltype(k)>().pretty_name();
	cout << endl << " *p " << type_id_with_cvr<decltype(p)>().pretty_name();
	cout << endl << " j2 " << type_id_with_cvr<decltype(j2)>().pretty_name();
	cout << endl << " &k2 " << type_id_with_cvr<decltype(k2)>().pretty_name();
	cout << endl << endl;
	return 0;
}
