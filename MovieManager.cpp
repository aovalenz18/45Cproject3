#include "MovieManager.h"

MovieManager::MovieManager()
{
    this->totalMovies = 0;
}

//shows menu 
void MovieManager::run() {
    MovieManagerUI show;
    show.printMenu();
    std::string command = show.getCommand();
    if (command == "rm" || command == "RM" || command == "rM" || command == "Rm")
        {
            std::cout << "rent movie" << std::endl;
            return command;
            break;
        }

        if (command == "dm" || command == "DM" || command == "dM" || command == "Dm")
        {
            std::cout << "discontinue movie" << std::endl;
            return command;
            break;
        }
        if (command == "am" || command == "AM" || command == "aM" || command == "Am")
        {
            std::cout << "add movie" << std::endl;
            return command;
            break;
        }
        if (command == "rr" || command == "RR" || command == "rR" || command == "Rr")
        {
            std::cout << "return rental" << std::endl;
            return command;
            break;
        }
        if (command == "p" || command == "P" )
        {
            std::cout << "print" << std::endl;
            return command;
            break;
        }
        if (command == "q" || command == "Q" )
        {
            std::cout << "quit" << std::endl;
            return command;
            break;
        }
}

//adds movie
void MovieManager::addMovie(Movies m) {
    this->arrayOfMovies[this->totalMovies] = m;
    this->totalMovies++;
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
        if (arrayOfMovies[i].getCode() == movieCode) {
            for (int i = 0; i < arrayOfMovies[i].getSizeOfRenters(); i++) {
                //access the renters array from movies class: arrayOdMovies[i]
            }
        } 
    }
}

//fix
void MovieManager::printInventory() {
    //operator overload?
}
