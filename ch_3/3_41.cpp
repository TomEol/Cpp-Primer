#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main() {
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8};
  vector<int> vec(begin(array), end(array));
  for (const auto &i : vec)
   cout << i << ' ';
 cout << endl;
  return 0;
}
