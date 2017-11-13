#include <iostream>
#include <string>

void changeWithWhile() {
  std::string s;
  if (std::cin >> s) {
    std::string::size_type position = 0;
    while (position != s.size())
      s[position++] = 't';
  }std::cout << s << std::endl;
}

void changeWithFor() {
  std::string s;
  if (std::cin >> s) {
    for (std::string::size_type position = 0; position != s.size(); ++position)
      s[position] = 't';
  }std::cout << s << std::endl;
}

int main() {
  changeWithWhile();
  changeWithFor();

  return 0;
}
