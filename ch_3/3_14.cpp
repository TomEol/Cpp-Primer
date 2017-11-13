#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec;
  int num;
  while (std::cin >> num)
    vec.push_back(num);
  for (const auto &n : vec)
    std::cout << n << " ";
  std::cout << std::endl;
  return 0;
}
