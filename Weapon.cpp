#include <iostream>
#include "Weapon.hpp"

using namespace std;

Weapon::Weapon() : m_nom("Rusty Sword"), m_degats(10) {
}

Weapon::Weapon(string name, int degats) : m_nom(name), m_degats(degats) {
}

void Weapon::changer(string name, int degats) {
  m_nom    = name;
  m_degats = degats;
}

void Weapon::afficher() const {
  cout << "Weapon : " << m_nom << " (Degats : " << m_degats << ")" << endl;
}

int Weapon::getDegats() const {
    return m_degats;
}
