#ifndef WEAPON_HPP_INCLUDED
#define WEAPON_HPP_INCLUDED

#include <string>

class Weapon {
public:
  Weapon();
  Weapon(std::string name, int damages);
  void change(std::string name, int damages);
  void show() const;
  int  getDamages() const;

private:
  std::string m_name;
  int         m_damages;
};

#endif  // WEAPON_HPP_INCLUDED
