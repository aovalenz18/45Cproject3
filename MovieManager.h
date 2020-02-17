#ifndef MOVIEMANAGER_H_
#define MOVIEMANAGER_H_

#include "MovieManagerUI.h"

class MovieManager {
    private:
        Movies arrayOfMovies[20];
        int totalMovies;

    public:
        void run();
        void addMovie(Movies m);
        void discontinueMovie(std::string);
        void rentMovie(std::string movieCode, Renter s);
        void returnRental(int renterID, std::string movieCode);
        void printInventory();

};

#endif
