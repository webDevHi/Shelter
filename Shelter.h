#ifndef SHELTER_H
#define SHELTER_H

#include <vector>
#include <string>
#include "Animal.h" // Include the base class header

class Shelter {
    public:
        void displayAnimals();
        void removeAnimal(std::string name);
        void addAnimal(Animal* animal);
//Other classes do not need direct access to the shelter class
    private:
        std::vector<Animal*> shelter;
};
#endif // SHELTER_H