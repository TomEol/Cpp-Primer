#include <iostream>
#include <vector>
using std::cout;using std::cin;using std::endl;

int main() {
  std::vector<int> vec;
  int i;
  while (cin >> i)
    vec.push_back(i);
  for (auto &elem : vec)
    elem = elem % 2 ? elem + elem : elem;
  for (const auto &elem : vec)
    cout << elem << " ";
  cout << endl<< endl;
  return 0;
}
