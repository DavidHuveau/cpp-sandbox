#include <iostream>
#include <string>

#include "arrays.hpp"
#include "tools.hpp"
#include "variables.hpp"

using namespace std;

int main() {
  short int choiceNumber;
  showMenu(choiceNumber);

  switch (choiceNumber) {
  case 1:
    print();
    break;
  case 2: {
    string colors[] = {"red", "green", "blue"};
    showColors(colors, 3);
    showColors(colors, 3);
    cout << "Average: " << averageScore() << endl;
    break;
  }
  }

  return 0;
}
