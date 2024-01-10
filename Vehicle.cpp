#include <iostream>

#include "Vehicle.hpp"

using namespace std;

Vehicle::Vehicle() : m_price(0) {
}

Vehicle::Vehicle(int price) : m_price(price) {
}

Vehicle::~Vehicle() {
  cout << "Vehicle desctructor" << " (Adress : " << this << ")" << endl;
}

void Vehicle::display() const {
  cout << "This is a vehicle. The price is : " << m_price << " (Adress : " << this << ")" << endl;
}
