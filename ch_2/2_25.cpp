#include<iostream>
using std::cout; using std::endl;
#include <boost/type_index.hpp>

using boost::typeindex::type_id_with_cvr;

int main() {

	int *ip , i , &r = i;  // r  - int &
	                       // ip - int *
	                       // i  - int 
	cout << endl << " ip - " << type_id_with_cvr<decltype(ip)>().pretty_name();
	cout << endl << " i  - " << type_id_with_cvr<decltype(i)>().pretty_name();
	cout << endl << " r  - " << type_id_with_cvr<decltype(r)>().pretty_name();

	int i2, *p = 0;// p - int *   |  i2 - int
	cout << endl << " p - " << type_id_with_cvr<decltype(p)>().pretty_name();
	cout << endl << " i - " << type_id_with_cvr<decltype(i2)>().pretty_name();

	int *ip2, ip3;// ip2 - int *   |  ip3 - int
	cout << endl << " ip2 - " << type_id_with_cvr<decltype(ip2)>().pretty_name();
	cout << endl << " ip3 - " << type_id_with_cvr<decltype(ip3)>().pretty_name();

	cout << endl << endl;
	return 0;
}