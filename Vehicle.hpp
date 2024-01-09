#ifndef VEHICLE_HPP_INCLUDED
#define VEHICLE_HPP_INCLUDED

class Vehicle {
public:
  Vehicle();
  Vehicle(int price);
  virtual void display() const;

protected:
  int m_price;
};

#endif  // VEHICLE_HPP_INCLUDED
