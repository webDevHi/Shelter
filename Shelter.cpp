#include <iostream>
#include <vector>
#include <string>
#include <set>
#include "Shelter.h"
#include "animal.h" 
#include "cat.h"   
#include "dog.h"    


        void Shelter::displayAnimals() {
            for (Animal* animal : shelter){
                        std::cout << "Animal: " << animal->name << "/"  << std::endl;
            };
        };
        void Shelter::removeAnimal(const std::string name){
            for (size_t i = 0; i < shelter.size(); ){
                if (shelter[i]->name == name){
                    //vector erase requires the calculated iterator
                    delete shelter[i]; 
                    shelter.erase(shelter.begin() + i);
                }else {
                    ++i;
                };
            };
        };
        void Shelter::addAnimal(Animal* animal) {
            shelter.push_back(animal);
        };



