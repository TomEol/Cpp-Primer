#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main() {
  vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8};
  int arr[10];
  int *beg = arr;
  int *end = arr + vec.size();
  for (const auto &i : vec)
    *beg++ = i;

  for (beg = ia; beg != end; ++beg)
    cout << *beg << ' ';
  cout << endl;
  return 0;
}
