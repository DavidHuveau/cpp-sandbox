#include <iostream>
#include "Vector2D.hpp"

using namespace std;

Vector2D::Vector2D(int x, int y) : m_x(x), m_y(y) {}

Vector2D Vector2D::operator+(const Vector2D& other) const {
  return Vector2D(m_x + other.m_x, m_y + other.m_y);
}

void Vector2D::display() const {
  cout << "(" << m_x << ", " << m_y << ")" << endl;
}
