#include <iostream>
#include <vector>

void sum_adjacent(const std::vector<int> &vec) {
  if (vec.size() < 2)
    return;
  for (auto it = vec.cbegin(); it != vec.cend() - 1; ++it)
    std::cout << *it + *(it + 1) << '\t';
  std::cout << std::endl;
}

void sum_symmetric(const std::vector<int> &vec) {
  auto mid = vec.cbegin() + (vec.cend() - vec.cbegin() + 1) / 2;
  for (auto it = vec.cbegin(); it != mid; ++it){
    std::cout << *it + *(vec.cend() - 1 - (it - vec.cbegin())) << '\t';
  }
  std::cout << std::endl;
}

int main() {
  std::vector<int> vec;
  int n;
  while (std::cin >> n){
    vec.push_back(i);
  }
  sum_adjacent(iv);
  sum_symmetric(iv);

  return 0;
}
