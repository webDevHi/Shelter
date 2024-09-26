#include <iostream>
#include <string>

// Base class: Animal
class Animal {
protected:
    std::string name;
    int age;
    std::string type;

public:
    // Constructor to initialize attributes
    Animal(const std::string& name, int age, const std::string& type)
        : name(name), age(age), type(type) {}

    // Method to display animal's details
    virtual void displayInfo() const {
        std::cout << "Name: " << name << "\n";
        std::cout << "Age: " << age << " years\n";
        std::cout << "Type: " << type << "\n";
    }

    // Method to return type of animal
    std::string getType() const {
        return type;
    }

    // Virtual destructor (explicit definition)
    virtual ~Animal() {
        // Optional: you could add a message here or leave it empty
    }
};

// Derived class: Dog
class Dog : public Animal {
private:
    std::string breed;

public:
    // Constructor to initialize attributes 
    Dog(const std::string& name, int age, const std::string& breed)
        : Animal(name, age, "Dog"), breed(breed) {}

    // Display dog info including breed
    void displayInfo() const {
        Animal::displayInfo();
        std::cout << "Breed: " << breed << "\n";
    }
};

// Derived class: Cat
class Cat : public Animal {
private:
    std::string breed;

public:
    // Constructor to initialize attributes
    Cat(const std::string& name, int age, const std::string& breed)
        : Animal(name, age, "Cat"), breed(breed) {}

    // Display cat info including breed
    void displayInfo() const {
        Animal::displayInfo();
        std::cout << "Breed: " << breed << "\n";
    }
};

// Main function for testing
int main() {
    Dog myDog("AirBud", 3, "Golden Retriever");
    Cat myCat("Garfield", 2, "Tabby");

    std::cout << "Dog Info:\n";
    myDog.displayInfo();

    std::cout << "\nCat Info:\n";
    myCat.displayInfo();

    return 0;
}
