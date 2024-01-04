#ifndef VETOR2D_HPP_INCLUDED
#define VETOR2D_HPP_INCLUDED

#include <iostream>

class Vector2D {
public:
  Vector2D(int x, int y);
  Vector2D             operator+(const Vector2D& other) const;
  Vector2D&            operator+=(const Vector2D& other);
  friend std::ostream& operator<<(std::ostream& os, const Vector2D& vector);
  void                 display() const;

private:
  int m_x;
  int m_y;
};

#endif  // VETOR2D_HPP_INCLUDED
