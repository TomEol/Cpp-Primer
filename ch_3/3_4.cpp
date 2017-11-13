#include <iostream>
#include <string>
using namespace std;

void check_equal() {
  string s1, s2;
  if (cin >> s1 >> s2) {
    if (s1 == s2)
      cout << "equal" << endl;
    else if (s1 > s2)
      cout << "first is larger" << endl;
    else
      cout << "second is larger" << endl;
  }
}

void check_length() {
  string s1, s2;
  if (cin >> s1 >> s2) {
    if (s1.size() == s2.size())
      cout << "The same length." << endl;
    else if (s1.size() > s2.size())
      cout << "first is longer" << endl;
    else
      cout << "second is longer" << endl;
  }
}

int main() {
  check_equal();
  check_length();
  return 0;
}
