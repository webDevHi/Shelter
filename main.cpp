#include <stdio.h>
#include <iostream>

int main(){
    //Variable Declaration
    //Shelter shelter1;
    int n = -1;
    std::string name;

    do {
        std::cout << "____Menu____" << endl;
        std::cout << "1. Add Dog or Cat" << endl;
        std::cout << "2. Remove Animal by name" << endl;
        std::cout << "3. Display all animals" << endl;
        std::cout << "4. Exit Program" << endl;
        switch (n)
        {
        case 1: //Add Dog or Cat to list of animals
            std::cout << "Please enter the animals info \n";
            std::cin >> name;
            // ShelterClass addAnimal(Animal* animal);
            break;
        
        case 2: // Remove Animal by name
            std::cout << "Please enter the animals name: \n";
            std::cin >> name;
            //ShelterClass removeAnimal(std::string name);
            break;

        case 3: // Display all animals
            //ShelterClass displayAnimal();
            break;

        case 4: //Program exit by user input
            n = -1; //Exit Do-While loop
            std::cout << "Goodbye." << endl; 
            break;
        
        default: //Error handling
            std::cout << "Unexpected Input, please try again..." << endl;
            break;
        }
    }while(n > 0);
    return 0;
}
