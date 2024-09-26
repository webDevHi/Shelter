#ifndef CAT_H
#define CAT_H

#include "Animal.h"
#include <string>

class Cat : public Animal {
private:
    std::string breed;

public:
    // Constructor to initialize attributes
    Cat(const std::string& name, int age, const std::string& breed);

    // Override displayInfo to show breed
    void displayInfo() const override;
};

#endif // CAT_H
