#include <iostream>

int main() {
  double dval;
  int ival;
  int *pi;
  //dval = ival = pi = 0;  // Error: pi is int* ival is int
  dval = ival  = 0;
  pi = 0;

  return 0;
}
