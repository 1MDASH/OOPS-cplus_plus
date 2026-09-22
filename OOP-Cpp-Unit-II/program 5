#include <iostream>
#include <string>
#include <utility>
class Vehicle {
protected:
std::string registrationNumber;
public:
explicit Vehicle(std::string registration)
: registrationNumber(std::move(registration)) {}

void start() const {
std::cout << "Vehicle " << registrationNumber << " started\n";
}
};

class Car : public Vehicle {
public:
explicit Car(std::string registration) : Vehicle(std::move(registration)) {}

void openBoot() const {

std::cout << "Car boot opened\n";
}
};
class Bike : public Vehicle {
public:
explicit Bike(std::string registration) : Vehicle(std::move(registration)) {}

void helmetReminder() const {
std::cout << "Please wear a helmet\n";
}
};
int main() {
Car car("MH12AB1234");
Bike bike("MH12CD5678");
car.start();
car.openBoot();
bike.start();
bike.helmetReminder();

return 0;
}
