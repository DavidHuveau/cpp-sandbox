#include "arrays.hpp"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// a static array is always passed as a reference
void showColors(string values[], short int length) {
  for (short int i = 0; i < length; i++) {
    cout << values[i] << '\t';
  }
  cout << endl;
  values[0] = "black";
}

short int averageScore() {
  vector<short int> scores = {2, 19, 15};
  scores.pop_back();
  scores.push_back(10);
  scores.push_back(20);
  int total(0);

  for (short int i = 0; i < scores.size(); i++) {
    total += scores[i];
  }
  return total / scores.size();
}
