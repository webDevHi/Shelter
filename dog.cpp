#include "dog.h"
#include <iostream>

// Constructor to initialize attributes
Dog::Dog(const std::string& name, int age, const std::string& breed)
    : Animal(name, age, "Dog"), breed(breed) {}

// Override displayInfo to show breed
void Dog::displayInfo() const {
    Animal::displayInfo();
    std::cout << "Breed: " << breed << "\n";
}
