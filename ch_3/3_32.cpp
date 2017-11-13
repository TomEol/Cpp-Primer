#include <vector>

int main() {
  int array[10];
  for (size_t i = 0; i != 10; ++i)
    array[i] = i;
  int array2[10];
  for (size_t i = 0; i != 10; ++i)
    array2[i] = array[i];
  std::vector<int> vec;
  for (int i = 0; i != 10; ++i)
    vec.push_back(i);
  std::vector<int> vec2(vec);
  return 0;
}
