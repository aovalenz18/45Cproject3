#include "MovieManager.h"
#include <sstream>
#include <array>

MovieManager::MovieManager()
{
    this->totalMovies = 0;
    //Movies arrayOfMovies[20];
}

//shows menu 
void MovieManager::run() {
    MovieManagerUI show;
    show.printMenu();
    std::string command = show.getCommand();
    while(command != "q" || command != "Q"){
        if (command == "rm" || command == "RM" || command == "rM" || command == "Rm")
            {
                std::cout << "rent movie" << std::endl;
                
            }

        if (command == "dm" || command == "DM" || command == "dM" || command == "Dm")
        {
            std:: string code = show.discMoviePrompt();
            for(int i=0; i<sizeof(arrayOfMovies);i++)
            {
                if(code == arrayOfMovies[i].getCode())
                {
                    Movies obj;
                    arrayOfMovies[i] = obj;
                }
            }
            
        }
        if (command == "am" || command == "AM" || command == "aM" || command == "Am")
        {
            // add movie here
            Movies m = show.addMoviePrompt(); 
            //std:cout << m << std::endl;
            addMovie(m);
            std::cout << this->arrayOfMovies[0] << std::endl;
            std::cout << "Movie has been added" << std::endl;
            show.printMenu();
            //std::string command = show.getCommand();

        }
        if (command == "rr" || command == "RR" || command == "rR" || command == "Rr")
        {
                std::cout << "return rental" << std::endl;
                int rId = show.returnRentalPrompt();

                
        }
        if (command == "p" || command == "P" )
        {
            std::cout << "print" << std::endl;
                
        }
        if (command == "q" || command == "Q" )
        {
            std::cout << "quit" << std::endl;
            std:: string command = "q";   
        }
        std::string command = show.getCommand();

    }
    std::cout << "Program terminated" << std::endl;
}

//adds movie
void MovieManager::addMovie(Movies m) {
    std::cout << "Testing:" << std::endl; 
    std::cout << sizeof(this->arrayOfMovies) << std::endl;
    if(sizeof(this->arrayOfMovies) == 10)
    {
        throw MovieLimitException();
    }
    this->arrayOfMovies[this->totalMovies] = m;
    this->totalMovies++;
    std::cout << "Testing:" << std::endl; 
    std::cout << sizeof(this->arrayOfMovies) << std::endl;
}

//removes movie
void MovieManager::discontinueMovie(std::string movieCode) {
    for (int i = 0; i < sizeof(this->arrayOfMovies);i++ ) 
    {
        if (arrayOfMovies[i].getCode() == movieCode) {
            Movies obj;
            arrayOfMovies[i] = obj;
        } 
    }
}

//needs movie and renter classes defined
void MovieManager::rentMovie(std::string movieCode, Renter s) {
    for (int i = 0; i < sizeof(this->arrayOfMovies);i++ ) 
    {
        if (arrayOfMovies[i].getCode() == movieCode) {
            //add to renter array
            arrayOfMovies[i].rentMovie(s);
        } 
    }
}

//FIX
void MovieManager::returnRental(int renterID, std::string movieCode) {
    for (int i = 0; i < sizeof(this->arrayOfMovies);i++ ) 
    {
        if (arrayOfMovies[i].getCode() == movieCode) 
        {
            arrayOfMovies[i].removeRenterID(renterID);   
        } 
    }
}

//fix 
void MovieManager::printInventory() {
    //operator overload?
}
