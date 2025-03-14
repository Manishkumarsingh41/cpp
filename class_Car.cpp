#include <iostream>
#include <string>

class Car {
public:
    std::string make;
    std::string model;
    int year;

    Car(std::string carMake, std::string carModel, int carYear) 
        : make(carMake), model(carModel), year(carYear) {}

    void displayInfo() {
        std::cout << "Car Make: " << make << ", Model: " << model << ", Year: " << year << std::endl;
    }
};

int main() {
    Car myCar("Honda", "Civic", 2022);
    myCar.displayInfo();

    return 0;
}
