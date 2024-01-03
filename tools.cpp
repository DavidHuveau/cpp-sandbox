#include "tools.hpp"

#include <iostream>

using namespace std;

void showMenu(short int& choiceNumber) {
  cout << "1 - Variables" << endl;
  cout << "2 - Arrays" << endl;
  cout << "3 - Read file" << endl;
  cout << "4 - Write file" << endl;
  cout << "5 - Pointers" << endl;
  cout << "6 - Character classes" << endl;
  cout << "7 - Operator overload" << endl;
  cin >> choiceNumber;
}
