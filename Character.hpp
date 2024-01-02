#ifndef DEF_CHARACTER
#define DEF_CHARACTER

#include <string>

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

private:
  int         m_vie;
  std::string m_nomArme;
  int         m_degatsArme;
};

#endif
