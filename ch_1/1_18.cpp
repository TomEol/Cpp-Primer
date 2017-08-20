#include <iostream>
using std::cout; using std::endl;


int main() {

		int curVal = 0, val = 0;

		if (std::cin >> curVal) {
			int cnt = 1;

			while (std::cin >> val) {
				if (val == curVal)
					++cnt;
				else {
					cout << curVal << " occurs " << cnt << " time(s)" << endl;
					curVal = val;
					cnt = 1;
				}
			}
			std::cout << curVal << " occurs "
				<< cnt << " time(s)" << endl;
		}

	cout << endl;
	return 0;
}