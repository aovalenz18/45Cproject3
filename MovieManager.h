#ifndef MOVIEMANAGER_H_
#define MOVIEMANAGER_H_

#include "MovieManagerUI.h"

class MovieManager {
    private:
        std::string arrayOfMovies[20];
        int totalMovies = 0;

    public:
        void run();
        void addMovie(Movie m);
        void discontinueMovie(Movie m);
        void rentMovie(std::string movieCode, Renter s);
        void returnRental(int renterID, std::string movieCode);
        void printInventory();

};

#endif
