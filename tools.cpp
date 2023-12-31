#include "tools.hpp"

#include <iostream>

using namespace std;

void showMenu(short int& choiceNumber) {
  cout << "1 - variables" << endl;
  cout << "2 - arrays" << endl;
  cout << "3 - read file" << endl;
  cout << "4 - write file" << endl;
  cout << "5 - pointers" << endl;
  cout << "6 - Character classes" << endl;
  cin >> choiceNumber;
}
