#include "arrays.hpp"

#include <iostream>
#include <string>

using namespace std;

// a static array is always passed as a reference
void showColors(string values[], short int length) {
  for (short int i = 0; i < length; i++) {
    cout << values[i] << '\t';
  }
  cout << endl;
  values[0] = "black";
}
