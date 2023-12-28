#include "variables.hpp"

#include <iostream>
#include <string>

using namespace std;

char const SEPARATOR = ' ';

void printHello(string name, string prefix = "Hello") {
  cout << prefix << ", " << name << "!\n";
}

void print() {
  string const STR1("Hello"), STR2("world");
  cout << STR1 << SEPARATOR << STR2 << '!' << endl;

  cout << "Size of int type in bytes: " << sizeof(double) << endl;
  cout << "Lower limit of int : " << numeric_limits<double>::min() << endl;
  cout << "Upper limit of int : " << numeric_limits<double>::max() << endl;

  string name = "";
  cout << "Please, enter your full name: ";
  getline(cin, name);
  printHello(name);
  printHello(name, "Holà");
}
