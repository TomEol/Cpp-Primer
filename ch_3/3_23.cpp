#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec(10);
  for (int i = 0; i != 10; ++i)
    std::cin >> vec[i];
  for (auto it = vec.begin(); it != vec.end(); ++it)
    *it *= 2;
  for (const auto & n : vec)
    std::cout << n << " ";
  std::cout << std::endl;
  return 0;
}
