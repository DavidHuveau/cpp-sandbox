#ifndef DEF_CHARACTER
#define DEF_CHARACTER

#include <string>

class Character {
public:
  void recevoirDegats(int nbDegats);
  void attaquer(Character &cible);
  void boirePotionDeVie(int quantitePotion);
  void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
  bool estVivant();

private:
  int         m_vie;
  std::string m_nomArme;
  int         m_degatsArme;
};

#endif
