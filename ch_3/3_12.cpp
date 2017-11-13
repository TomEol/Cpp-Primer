#include <vector>
#include <string>

int main() {
  std::vector<std::vector<int>> ivec;  // OK, a vector of vector of int, similar to 2-d int array
  //std::vector<std::string> svec = ivec; // Error: different type
  std::vector<std::string> svec2(10, "null");// OK, a vector of ten strings - eac value are "null"
  return 0;
}
