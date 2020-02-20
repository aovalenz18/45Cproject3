#include "MovieManagerUI.h"
#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdio>
#include <sstream>
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

std::string MovieManagerUI::getCommand(){
    MovieManagerUI obj;

    std::string command;
    std::cin >> command;

    // while(true)
    // {
    //     if (command == "rm" || command == "RM" || command == "rM" || command == "Rm")
    //     {
    //         std::cout << "rent movie" << std::endl;
    //         return command;
    //         break;
    //     }

    //     if (command == "dm" || command == "DM" || command == "dM" || command == "Dm")
    //     {
    //         std::cout << "discontinue movie" << std::endl;
    //         return command;
    //         break;
    //     }
    //     if (command == "am" || command == "AM" || command == "aM" || command == "Am")
    //     {
    //         std::cout << "add movie" << std::endl;
    //         return command;
    //         break;
    //     }
    //     if (command == "rr" || command == "RR" || command == "rR" || command == "Rr")
    //     {
    //         std::cout << "return rental" << std::endl;
    //         return command;
    //         break;
    //     }
    //     if (command == "p" || command == "P" )
    //     {
    //         std::cout << "print" << std::endl;
    //         return command;
    //         break;
    //     }
    //     if (command == "q" || command == "Q" )
    //     {
    //         std::cout << "quit" << std::endl;
    //         return command;
    //         break;
    //     }


    //     std::cout << "Invalid Command." << std::endl;
    //     std::cout << "Enter a command:" << std::endl;  
    //     std::cin >> command;  
    // }
    return command;
}


Movies MovieManagerUI::addMoviePrompt(){
    std::string name;
    std::string code;

    std::cout << "Please enter a movie name: " << std::endl;
    cin >> name;
    
    std::cout << "Please enter a movie code: " << std::endl;
    cin >> code;

    Movies obj(name, code);

    return obj;

}

std::string MovieManagerUI::discMoviePrompt(){
    std::string c;
    std::cout << "Enter movie code: " << std::endl;
    cin >> c;
    return c;
}

int MovieManagerUI::returnRentalPrompt(){
    int id;
    std::cout << "Enter the renter ID: " << std::endl;
    std::cin >> id;
    // have to call the return rental function here? 
    return id;
}