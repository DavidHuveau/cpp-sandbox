#include <iostream>

#include "Vehicle.hpp"

using namespace std;

Vehicle::Vehicle() : m_price(0) {
}

Vehicle::Vehicle(int price) : m_price(price) {
}

void Vehicle::display() const {
  cout << "This is a vehicle. The price is : " << m_price << endl;
}
