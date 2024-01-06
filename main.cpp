#include <iostream>
#include <string>

#include "arrays.hpp"
#include "tools.hpp"
#include "variables.hpp"
#include "files.hpp"
#include "pointers.hpp"
#include "Character.hpp"
#include "Vector2D.hpp"

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
    Character david, goliath("Excalibur", 20);
    goliath.attack(david);
    david.drinkLifePotion(20);
    goliath.attack(david);
    david.attack(goliath);
    goliath.changeWeapon("Narsil", 40);
    goliath.attack(david);

    cout << endl << "David" << endl;
    david.showState();
    cout << endl << "Goliath" << endl;
    goliath.showState();

    Character michel(david); // clone David
    cout << endl << "Michel" << endl;
    michel.showState();

    Character link;
    link = goliath;
    cout << endl << "Link" << endl;
    link.showState();
    break;
  }
  case 7: {
    Vector2D vector1(2, 3);
    Vector2D vector2(1, 4);

    Vector2D result = vector1 + vector2;
    result.display();
    result += vector1;
    cout << result << endl;
  }
  }
  return 0;
}
