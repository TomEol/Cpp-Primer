#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<std::string> vec;
  std::string s;
  while (std::cin >> s)
    vec.push_back(s);
  for (auto &str : vec)
    for (auto &c : str)
      c = toupper(c);
  for (decltype(vec.size()) i = 0; i != vec.size(); ++i) {
    std::cout << vec[i] << '\t';
    if ((i + 1) % 8 == 0)
      std::cout << std::endl;
  }

  return 0;
}
