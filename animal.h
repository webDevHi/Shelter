#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
protected:
    std::string name;
    int age;
    std::string type;

public:
    // Constructor to initialize attributes
    Animal(const std::string& name, int age, const std::string& type);

    // Virtual method to display animal's details
    virtual void displayInfo() const;

    // Method to return the type of animal
    std::string getType() const;

    // Virtual destructor
    virtual ~Animal();
};

#endif // ANIMAL_H
