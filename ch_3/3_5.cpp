#include <iostream>
#include <string>

void concat() {
  std::string total, s;
  while (std::cin >> s)
    total += s;
  std::cout << total;
}

void concat_with_space() {
  std::string total, s;
  if (std::cin >> total) {
    while (std::cin >> s)
      total += ' ' + s;
  }std::cout << total;
}

int main() {
  concat();
  concat_with_space();
  return 0;
}
