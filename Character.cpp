#include "Character.hpp"

#include <iostream>

using namespace std;

Character::Character() : m_vie(100), m_weapon("Epee rouillee", 10) {
}

Character::Character(std::string nomArme, int degatsArme) : m_vie(100), m_weapon(nomArme, degatsArme) {
}

Character::Character(Character const& autre) : m_vie(autre.m_vie), m_weapon(autre.m_weapon) {
}

Character::~Character() {
}

void Character::recevoirDegats(int nbDegats) {
  m_vie -= nbDegats;

  if (m_vie < 0) {
    m_vie = 0;
  }
}

void Character::attaquer(Character& cible) {
  cout << ">attaquer" << endl;
  cible.recevoirDegats(m_weapon.getDegats());
}

void Character::boirePotionDeVie(int quantitePotion) {
  m_vie += quantitePotion;

  if (m_vie > 100) {
    m_vie = 100;
  }
}

void Character::changerArme(string nomNouvelleArme, int degatsNouvelleArme) {
  cout << ">changerArme: " << nomNouvelleArme << endl;
  m_weapon.changer(nomNouvelleArme, degatsNouvelleArme);
}

bool Character::estVivant() const {
  return m_vie > 0;
}

void Character::afficherEtat() {
  cout << "Vie : " << m_vie << endl;
  m_weapon.afficher();
}
