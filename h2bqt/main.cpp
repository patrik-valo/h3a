#include <iostream>
#include <vector>
#include "Car.h"

int main() {
std::vector<Car> carList;

carList.push_back(Car("BMW", "740", 2017));
carList.push_back(Car("BMW", "330", 2020));
carList.push_back(Car("BMW", "325", 2002));

std::cout << "Autolista:" << std::endl;
for (const Car& car : carList) {
car.printData();
}

return 0;
}
