#include <string>
#include <iostream>
using namespace std;

int main() {
  string s1, s2;
  cin >> s1 >> s2;
  if (s1 == s2)
    cout << " equal " << std::endl;
  else
    cout << " not equal " << std::endl;

  char cs1[100];
  char cs2[100];
  cin >> cs1 >> cs2;
  if (!strcmp(cs1, cs2))
    cout << " equal " << std::endl;
  else
    cout << " not equal " << std::endl;

  return 0;
}
