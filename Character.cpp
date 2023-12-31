#include "Character.hpp"
#include <iostream>

using namespace std;

void Character::recevoirDegats(int nbDegats) {
  m_vie -= nbDegats;

  if (m_vie < 0) {
    m_vie = 0;
  }
}

void Character::attaquer(Character &cible) {
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
  m_nomArme = nomNouvelleArme;
  m_degatsArme = degatsNouvelleArme;
}

bool Character::estVivant() {
  return m_vie > 0;
}
