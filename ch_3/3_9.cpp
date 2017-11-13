#include <iostream>
#include <string>

int main()
{
  std::string s;
  std::cout << s[0] << std::endl;  // Error: out of range, result is undefined.
  return 0;
}
