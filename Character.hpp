#ifndef DEF_CHARACTER
#define DEF_CHARACTER

#include <string>

#include "Weapon.hpp"

class Character {
public:
  Character();
  Character(std::string weaponName, int weaponDamages);
  // It does not need to be implemented unless a particular behaviour is desired.
  // By default, all the object's attributes will be copied.
  Character(Character const& other);
  ~Character();
  Character& operator=(Character const& other);

  void receiveDamages(int nbDamages);
  void attack(Character& target);
  void drinkLifePotion(int quantityPotion);
  void changeWeapon(std::string nameNewWeapon, int damagesNewWeapon);
  bool isAlive() const;
  void showState();

private:
  int    m_life;
  Weapon *m_weapon;
};

#endif
