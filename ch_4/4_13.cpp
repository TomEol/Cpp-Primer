#include <iostream>
using std::cout;

int main() {
  int i;
  double d;
  d = i = 3.5;
  cout << d << " " << i << endl;  // 3 3
  i = d = 3.5;
  cout << d << " " << i << endl;  // 3.5 3
  return 0;
}
