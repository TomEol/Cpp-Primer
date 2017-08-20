#include<iostream>
using std::cout; using std::endl;
#include <boost/type_index.hpp>

using boost::typeindex::type_id_with_cvr;

int main() {

	//=============================== 2_37
	int a = 3, b = 4;
	decltype(a) c = a;    // int
	decltype(a=b) d = a;  // int &

	++c;
	++d;

	cout << endl << " a " << type_id_with_cvr<decltype(a)>().pretty_name();
	cout << endl << " a = b " << type_id_with_cvr<decltype(a=b)>().pretty_name();
	cout << endl << " c " << type_id_with_cvr<decltype(c)>().pretty_name();
	cout << endl << " d " << type_id_with_cvr<decltype(d)>().pretty_name();

	//==================================== 2_38

	//  auto - ignore the top - level const qualifier and reference.
	//	decltype - include top - level const and reference.

	int i = 2, &r = i;
	const int ci = 3;

	auto a_a = r;
	decltype(i) d_b0 = i;
	decltype(r) d_b = r;
	auto a_c = ci;
	decltype(ci) d_d = ci;

	cout << endl;
	cout << endl << " auto a_a " << type_id_with_cvr<decltype(a_a)>().pretty_name();
	cout << endl << " decltype(i) " << type_id_with_cvr<decltype(i)>().pretty_name();
	cout << endl << " decltype(r) " << type_id_with_cvr<decltype(r)>().pretty_name();
	cout << endl << " auto a_c " << type_id_with_cvr<decltype(a_c)>().pretty_name();
	cout << endl << " decltype(ci) " << type_id_with_cvr<decltype(ci)>().pretty_name();

	cout << endl << endl;
	return 0;
}
