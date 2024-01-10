#include <iostream>

#include "Car.hpp"

using namespace std;

Car::Car() : Vehicle(), m_numDoors(0) {
}

Car::Car(int price, int numDoors) : Vehicle(price), m_numDoors(numDoors) {
}

void Car::display() const {
  Vehicle::display();
  cout << "This is a car. The price is : " << m_numDoors << " (Adress : " << this << ")" << endl;
}
