#include "Character.hpp"

#include <iostream>

using namespace std;

Character::Character() : m_vie(100), m_nomArme("Epee rouillee"), m_degatsArme(10) {
}

Character::Character(std::string nomArme, int degatsArme) : m_vie(100), m_nomArme(nomArme), m_degatsArme(degatsArme) {
}

Character::Character(Character const& autre) : m_vie(autre.m_vie), m_nomArme(autre.m_nomArme), m_degatsArme(autre.m_degatsArme) {
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
  cible.recevoirDegats(m_degatsArme);
}

void Character::boirePotionDeVie(int quantitePotion) {
  m_vie += quantitePotion;

  if (m_vie > 100) {
    m_vie = 100;
  }
}

void Character::changerArme(string nomNouvelleArme, int degatsNouvelleArme) {
  cout << ">changerArme: " << nomNouvelleArme << endl;
  m_nomArme    = nomNouvelleArme;
  m_degatsArme = degatsNouvelleArme;
}

bool Character::estVivant() const {
  return m_vie > 0;
}
