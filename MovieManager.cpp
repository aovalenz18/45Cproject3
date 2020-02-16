#include "MovieManager.h"

//shows menu 
void MovieManager::run() {
    MovieManagerUI show;
    show.printMenu();
}

//adds movie
void MovieManager::addMovie(Movie m) {
    this->arrayOfMovies[this->totalMovies] = m;
    this->totalMovies++;
}

//FIX: removes movie
void MovieManager::discontinueMovie(Movie m) {
    for (int i = 0; i < sizeof(this->arrayOfMovies);i++ ) {
        if (arrayOfMovies[i] == m) {
            delete this->arrayOfMovies[i];
        }
    }
}

//needs movie and renter classes defined
void MovieManager::rentMovie(std::string movieCode, Renter s) {

}

