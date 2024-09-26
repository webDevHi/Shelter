#ifndef DOG_H
#define DOG_H

#include "Animal.h"
#include <string>

class Dog : public Animal {
private:
    std::string breed;

public:
    // Constructor to initialize attributes
    Dog(const std::string& name, int age, const std::string& breed);

    // Override displayInfo to show breed
    void displayInfo() const override;
};

#endif // DOG_H
