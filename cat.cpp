#include "cat.h"
#include <iostream>

// Constructor to initialize attributes
Cat::Cat(const std::string& name, int age, const std::string& breed)
    : Animal(name, age, "Cat"), breed(breed) {}

// Override displayInfo to show breed
void Cat::displayInfo() const {
    Animal::displayInfo();
    std::cout << "Breed: " << breed << "\n";
}
