#include "Character.hpp"

#include <iostream>

using namespace std;

Character::Character() : m_life(100), m_weapon(nullptr) {
  m_weapon = new Weapon();
}

Character::Character(string weaponName, int weaponDamages) : m_life(100), m_weapon(nullptr) {
  m_weapon = new Weapon(weaponName, weaponDamages);
}

Character::Character(Character const& other) : m_life(other.m_life), m_weapon(other.m_weapon) {
  // todo
}

Character::~Character() {
  delete m_weapon;
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
