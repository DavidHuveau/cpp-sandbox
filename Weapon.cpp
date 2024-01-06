#include <iostream>
#include "Weapon.hpp"

using namespace std;

Weapon::Weapon() : m_name("Rusty Sword"), m_damages(10) {
}

Weapon::Weapon(string name, int damages) : m_name(name), m_damages(damages) {
}

void Weapon::change(string name, int damages) {
  m_name    = name;
  m_damages = damages;
}

void Weapon::show() const {
  cout << "Weapon : " << m_name << " (Damages : " << m_damages << ")" << " (Adress : " << this << ")" << endl;
}

int Weapon::getDamages() const {
    return m_damages;
}
