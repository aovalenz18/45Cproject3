#ifndef MOVIES_H_
#define MOVIES_H_

#include "Renter.h"

class Movies {
private:
    std::string code;
    std::string name;
    int countOfRentedCopies;
    Renter Renters[10];

public: 
    void rentMovie(Renter renter);
    void returnRental(int renterID);
    std::string getCode();

    int getSizeOfRenters();
    Renter getRenters();
};

#endif
