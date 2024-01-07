#include "Car.hpp"

using namespace std;

Car::Car() : Vehicle(), m_numDoors(0) {
}

Car::Car(int price, int numDoors) : Vehicle(price), m_numDoors(numDoors) {
}
