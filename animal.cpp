#include "Animal.h"
#include <iostream>

// Constructor to initialize attributes
Animal::Animal(const std::string& name, int age, const std::string& type)
    : name(name), age(age), type(type) {}

// Method to display animal's details
void Animal::displayInfo() const {
    std::cout << "Name: " << name << "\n";
    std::cout << "Age: " << age << " years\n";
    std::cout << "Type: " << type << "\n";
}

// Method to return type of animal
std::string Animal::getType() const {
    return type;
}

// Destructor
Animal::~Animal() {
}
