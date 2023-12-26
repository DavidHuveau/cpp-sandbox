#include <iostream>
#include <string>
#include "tools.hpp"

using namespace std;

int main() {
  string const STR1("Hello"), STR2("world");
  char const CHAR1 = '!';
  cout << STR1 << ' ' << STR2 << CHAR1 << endl;

  cout << "Size of int type in bytes: " << sizeof(double) << endl;
  cout << "Lower limit of int : " << numeric_limits<double>::min() << endl;
  cout << "Upper limit of int : " << numeric_limits<double>::max() << endl;

  string name = "";
  cout << "Please, enter your full name: ";
  getline(cin, name);
  cout << "Hello, " << name << "!\n";

  int value1(33), value2(11);
  exchangeValues(value1, value2);
  cout << "value1: " << value1 << " value2: " << value2 << endl;

  return 0;
}
