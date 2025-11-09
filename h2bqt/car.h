#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
private:
std::string brand;
std::string model;
int yearModel;

public:
// Konstruktori
Car(std::string b, std::string m, int y);

// Tulostus
void printData() const;
};

#endif
