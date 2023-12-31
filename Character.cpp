#include "Character.hpp"

#include <iostream>

using namespace std;

Character::Character() : m_life(100), m_weapon(nullptr) {
  m_weapon = new Weapon();
}

Character::Character(string weaponName, int weaponDamages) : m_life(100), m_weapon(nullptr) {
  m_weapon = new Weapon(weaponName, weaponDamages);
}

Character::Character(Character const& other) : m_life(other.m_life), m_weapon(nullptr) {
  // the weapon must also be cloned, otherwise the new character will use the same weapon address
  m_weapon = new Weapon(*(other.m_weapon));
}

Character::~Character() {
  delete m_weapon;
}

Character& Character::operator=(Character const& other) {
  // Check that the object is not the same as the one received as an argument
  if(this != &other) {
    m_life = other.m_life;
    delete m_weapon;
    // the weapon must also be cloned, otherwise the new character will use the same weapon address
    m_weapon = new Weapon(*(other.m_weapon));
  }
  return *this;
}

void Character::receiveDamages(int nbDamages) {
  m_life -= nbDamages;

  if (m_life < 0) {
    m_life = 0;
  }
}

void Character::attack(Character& target) {
  cout << ">Attack" << endl;
  target.receiveDamages(m_weapon->getDamages());
}

void Character::drinkLifePotion(int quantityPotion) {
  cout << ">Drink Life Potion" << endl;
  m_life += quantityPotion;

  if (m_life > 100) {
    m_life = 100;
  }
}

void Character::changeWeapon(string nameNewWeapon, int damagesNewWeapon) {
  cout << ">Change weapon: " << nameNewWeapon << endl;
  m_weapon->change(nameNewWeapon, damagesNewWeapon);
}

bool Character::isAlive() const {
  return m_life > 0;
}

void Character::showState() {
  cout << "Life : " << m_life << endl;
  m_weapon->show();
}
