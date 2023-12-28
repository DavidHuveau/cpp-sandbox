#include "tools.hpp"

#include <iostream>

using namespace std;

void showMenu(short int& choiceNumber) {
  cout << "1 - variables" << endl;
  cout << "2 - arrays" << endl;
  cin >> choiceNumber;
}
