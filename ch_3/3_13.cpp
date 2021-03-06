#include <vector>
#include <string>
using std::vector;
using std::string;

int main() {
  vector<int> v1;               // 0  element
  vector<int> v2(10);           // 10 elements, values - 0
  vector<int> v3(10, 42);       // 10 elements, values - 42
  vector<int> v4{10};           // 1  element,  value  - 10
  vector<int> v5{10, 42};       // 2  elements, values - 10 , 42
  vector<string> v6{10};        // 10 elements, values - empty string
  vector<string> v7{10, "hi"};  // 10 elements, values - "hi"

  return 0;
}
