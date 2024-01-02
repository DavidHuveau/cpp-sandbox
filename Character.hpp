#ifndef DEF_CHARACTER
#define DEF_CHARACTER

#include <string>

#include "Weapon.hpp"

class Character {
public:
  Character();
  Character(std::string nomArme, int degatsArme);
  Character(Character const& autre);
  ~Character();
  void recevoirDegats(int nbDegats);
  void attaquer(Character& cible);
  void boirePotionDeVie(int quantitePotion);
  void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
  bool estVivant() const;
  void afficherEtat();

private:
  int    m_vie;
  Weapon m_weapon;
};

#endif
