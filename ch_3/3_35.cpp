#include <iterator>
#include <iostream>
using namespace std;

int main() {
  int array[10];
  for (const auto &i : array)
    cout << i << ' ';
  cout << endl;

  for (int *bg = begin(ia), *ed = end(ia); bg != ed; ++bg)
    *bg = 0;

  for (const auto &i : ia)
    cout << i << " ";
  cout << endl;

  return 0;
}
