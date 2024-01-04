#include "Vector2D.hpp"

#include <iostream>

using namespace std;

Vector2D::Vector2D(int x, int y) : m_x(x), m_y(y) {}

Vector2D Vector2D::operator+(const Vector2D& other) const {
  return Vector2D(m_x + other.m_x, m_y + other.m_y);
}

Vector2D& Vector2D::operator+=(const Vector2D& other) {
  m_x += other.m_x;
  m_y += other.m_y;
  return *this;  // Returns a reference to the modified object
}

ostream& operator<<(ostream& os, const Vector2D& vector) {
  os << "(" << vector.m_x << ", " << vector.m_y << ")";
  return os;
}

void Vector2D::display() const {
  cout << "(" << m_x << ", " << m_y << ")" << endl;
}
