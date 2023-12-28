#include <iostream>

#include "tools.hpp"
#include "variables.hpp"

using namespace std;

int main() {
  print();

  int value1(33), value2(11);
  exchangeValues(value1, value2);
  cout << "value1: " << value1 << " value2: " << value2 << endl;

  return 0;
}
