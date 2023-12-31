#include <iostream>
#include <string>

#include "arrays.hpp"
#include "tools.hpp"
#include "variables.hpp"
#include "files.hpp"
#include "pointers.hpp"
#include "Character.hpp"

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
  case 3:
    showFileContent();
    break;
  case 4:
    writeFile();
    break;
  case 5:
    pointers();
    break;
  case 6: {
    Character david, goliath;
    goliath.attaquer(david);
    david.boirePotionDeVie(20);
    goliath.attaquer(david);
    david.attaquer(goliath);
    goliath.changerArme("Double hache tranchante veneneuse de la mort", 40);
    goliath.attaquer(david);
    break;
  }
  }
  return 0;
}
