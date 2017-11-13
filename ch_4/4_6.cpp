#include <iostream>
using std::cout;using std::cin;using std::endl;

int main() {
  int i;
  cin >> i;
  if (i % 2)
    cout << i << " odd number." << endl;
  else
    cout << i << " even number." << endl;

  return 0;
}
