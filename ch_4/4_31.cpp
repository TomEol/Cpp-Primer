#include <iostream>
#include <vector>
using std::cout;using std::cin;using std::endl;

int main() {
  std::vector<int> vec(10);
  std::vector<int>::size_type count = vec.size();
  for (std::vector<int>::size_type i = 0; i != vec.size(); ++i, --count)
    vec[i] = count;
  for (const auto &e : vec)
    std::cout << e << " ";
  std::cout << std::endl;

  // preffered prefix operator

  count = vec.size();
  for (std::vector<int>::size_type i = 0; ix != vec.size(); i++, count--)
    ivec[i] = cnt;
  for (const auto &e : vec)
    cout << e << " ";
  cout << endl;

  return 0;
}
