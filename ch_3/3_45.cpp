#include <iostream>

int main() {
    const size_t row = 3;
    const size_t col = 3;
    int array[row][col] = { {1, 1, 1},
                             {2, 2, 2},
                             {3, 3, 3}};

  for (const auto &r : array) {
    for (const auto &c : r)
      std::cout << c << '\t';
    std::cout << std::endl;
  }
  for (size_t i = 0; i != row; ++i) {
    for (size_t j = 0; j != col; ++j)
      std::cout << array[i][j] << '\t';
    std::cout << std::endl;
  }
  for (auto pr = array; pr != array + row; ++pr) {
    for (auto pc = *pr; pc != *pr + col; ++pc)
      std::cout << *pc << '\t';
    std::cout << std::endl;
  }
  return 0;
}
