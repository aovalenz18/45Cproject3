#include "Movies.h"

void Movies::rentMovie(Renter renter) {
    this->Renters[this->countOfRentedCopies] = renter;
    this->countOfRentedCopies++;
}

void Movies::returnRental(int renterID) {

}