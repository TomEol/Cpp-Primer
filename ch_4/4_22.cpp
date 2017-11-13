#include <iostream>
using std::cout;using std::cin;using std::endl;

int main() {
  int grade;
  cin >> grade;

  if (grade > 90)
    cout << "high pass" << endl;
  else if (grade > 75)
    cout << "pass" << endl;
  else if (grade >= 60)
    cout << "low pass" << endl;
  else
    cout << "fail" << endl;

  return 0;
}
