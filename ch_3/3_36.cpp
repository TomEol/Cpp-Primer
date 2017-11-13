#include <vector>
#include <iostream>

int main() {
  int array1[5];
  int array2[5];
  for (int i = 0; i != 5; ++i)
    std::cin >> array1[i];
  for (int i = 0; i != 5; ++i)
    std::cin >> array2[i];

  int i = 0;
  for (; i != 5; ++i)
    if (array1[i] != array2[i]) {
      std::cout << " not equal " << std::endl;
      break;
    }
  if (i == 5)
    std::cout << " equal " << std::endl;

  std::vector<int> vec1;
  std::vector<int> vec2;
  int num;
  for (int i = 0; i != 5; ++i) {
    std::cin >> num;
    vec1.push_back(num);
  }
  for (int i = 0; i != 5; ++i) {
    std::cin >> num;
    vec2.push_back(num);
  }

  if (vec1 == vec2)
    std::cout << " equal " << std::endl;
  else
    std::cout << " not equal " << std::endl;
  return 0;
}
