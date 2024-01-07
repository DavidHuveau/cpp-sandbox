#ifndef BIKEHPP_INCLUDED
#define BIKEHPP_INCLUDED

#include "Vehicle.hpp"

class Car : public Vehicle {
public:
  Car();  // Will automatically call the default Vehicle constructor
  Car(int price, int numDoors);

private:
  int m_numDoors;
};

#endif  // BIKEHPP_INCLUDED
