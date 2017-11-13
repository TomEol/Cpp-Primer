#include <iostream>

int main() {

  const size_t row = 3;
  const size_t col = 3;

  int array[row][col] = { {0, 1, 2},
                           {4, 5, 6},
                           {8, 9, 10}};

  for (const int (&r)[col] : array) {
    for (const int &c : r)
      std::cout << c << " ";
    std::cout << std::endl;
  }
  for (size_t i = 0; i != row; ++i) {
    for (size_t j = 0; j != col; ++j)
      std::cout << array[i][j] << '\t';
    std::cout << std::endl;
  }
  for (int (*pr)[col] = ia; pr != array + row; ++pr) {
    for (int *pc = *pr; pc != *pr + col; ++pc)
      std::cout << *pc << '\t';
    std::cout << std::endl;
  }

  return 0;
}
