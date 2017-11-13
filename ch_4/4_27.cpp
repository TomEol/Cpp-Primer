#include <iostream>

int main() {
  unsigned long ul1 = 3, ul2 = 7;

  std::cout << (ul1 & ul2) << std::endl;   // 3
  std::cout << (ul1 | ul2) << std::endl;   // 7
  std::cout << (ul1 && ul2) << std::endl;  // 1
  std::cout << (ul1 || ul2) << std::endl;  // 1

  return 0;
}
