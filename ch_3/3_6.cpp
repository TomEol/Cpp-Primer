#include <iostream>
#include <string>

int main() {
  std::string s;
  if (std::cin >> s) {
    for (auto &c : s)
      c = 't'; // can change string s because c is reference
  } std::cout << s << std::endl;
  return 0;
}
