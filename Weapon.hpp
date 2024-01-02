#ifndef WEAPON_HPP_INCLUDED
#define WEAPON_HPP_INCLUDED

#include <string>

class Weapon {
public:
  Weapon();
  Weapon(std::string name, int degats);
  void changer(std::string name, int degats);
  void afficher() const;
  int  getDegats() const;

private:
  std::string m_nom;
  int         m_degats;
};

#endif  // WEAPON_HPP_INCLUDED
