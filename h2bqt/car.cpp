#include "Car.h"
#include <iostream>

Car::Car(std::string b, std::string m, int y)
: brand(b), model(m), yearModel(y) {}

void Car::printData() const {
std::cout << "Automerkki: " << brand
<< ", Automalli: " << model
<< ", vuosimalli: " << yearModel << std::endl;
}
