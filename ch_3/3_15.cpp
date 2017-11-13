#include <iostream>
#include <vector>
#include <string>

int main() {
  std::vector<std::string> vec;
  std::string s;
  while (std::cin >> s)
    vec.push_back(s);
  for (const auto & n : vec)
    std::cout << n << " ";
  std::cout << std::endl;

  return 0;
}
