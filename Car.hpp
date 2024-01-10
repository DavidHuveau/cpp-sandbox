#ifndef CAR_HPP_INCLUDED
#define CAR_HPP_INCLUDED

#include "Vehicle.hpp"

class Car : public Vehicle {
public:
  Car();
  Car(int price, int numDoors);
  virtual ~Car() override;
  void display() const override;

protected:
  int m_numDoors;
};

#endif  // CAR_HPP_INCLUDED
