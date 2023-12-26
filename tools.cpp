#include "tools.hpp"

void exchangeValues(int& a, int& b) {
  int tmp(b);
  b = a;
  a = tmp;
}
