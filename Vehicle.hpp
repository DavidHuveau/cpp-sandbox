#ifndef VEHICLE_HPP_INCLUDED
#define VEHICLE_HPP_INCLUDED

class Vehicle {
public:
  Vehicle();
  Vehicle(int price);
  void display() const;

private:
  int m_price;
};

#endif  // VEHICLE_HPP_INCLUDED
