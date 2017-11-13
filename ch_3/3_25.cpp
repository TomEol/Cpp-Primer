#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<unsigned> scores(11, 0);
  unsigned grade;
  while (cin >> grade)
    ++*(scores.begin() + grade / 10);
  for (const auto & elem : scores)
    cout << elem << ' ';
  cout << endl;

  return 0;
}
