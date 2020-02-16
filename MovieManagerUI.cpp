#include "MovieManagerUI.h"
#include <iostream>

void MovieManagerUI::printMenu(){
    std::cout << "Welcome to Movie Rental Kiosk!" << std::endl;
    std::cout << std::endl;
    std::cout << "----------" << std::endl;

    std::cout << std::endl;

    std::cout << "am: Add Movie" << std::endl;
    std::cout << std::endl;

    std::cout <<"dm: Discontinue Movie" << std::endl;
    std::cout << std::endl;

    std::cout << "rm: Rent Movie" << std::endl;
    std::cout << std::endl;

    std::cout << "rr: Return Rental" << std::endl;
    std::cout << std::endl;

    std::cout << "p: Print Movie Inventory" << std::endl;
    std::cout << std::endl;

    std::cout << "q: Quit Program" << std::endl;
    std::cout << std::endl;

    std::cout << "----------" << std::endl;
    std::cout << std::endl;

    std::cout <<"Enter Command: " <<std::endl;

}

string MovieManagerUI::getCommand(){
    MovieManagerUI obj;

    std::string command;
    std::string commands[6] = {"rm","am", "dm","rr","p","q"};


    std::cin>>command;

    bool var1 = true;

    int len = sizeof(command); 

    while (var1){
        if (len <= 2){
            var1 = false;
            continue;
        };
        
        std::cout <<"Invalid command" << std::endl;
        obj.printMenu();
        std::cin>>command;
    }
    

    bool var = true;

    while(var)
    {
        for (int i=0;i<6;i++)
        {
        std::string word = commands[i];
        

        }

    }

    


}