#include "Movies.h"

Movies::Movies() {
    this->name="";
    this->code="";
    this->countOfRentedCopies=0;
}

void Movies::rentMovie(Renter renter) {
    this->Renters[this->countOfRentedCopies] = renter;
    this->countOfRentedCopies++;
}

void Movies::returnRental(int renterID) {
    for (int i = 0; i < getSizeOfRenters(); i++) {
        if (this->Renters[i].getRenterID() == renterID) {
            Renter obj;
            Renters[i] = obj;
        }
    }
}

std::string Movies::getCode(){
    return this->code;
}

int Movies::getSizeOfRenters() {
    return sizeof(this->Renters);
}

// Renter Movies::getRenters() {
//     return this->Renters;
// }