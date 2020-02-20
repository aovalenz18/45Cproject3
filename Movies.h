#ifndef MOVIES_H_
#define MOVIES_H_

#include "Renter.h"
#include <sstream>


class Movies {
private:
    std::string code;
    std::string name;
    int countOfRentedCopies;
    Renter Renters[10];

public: 
    Movies();
    Movies(std::string name, std::string code);
    void rentMovie(Renter renter);
    void returnRental(int renterID);
    std::string getCode();
    void getRenterID(int id);
    std::string getRenterInfo();
    int getSizeOfRenters();
    friend ostream& operator << (ostream& os, Movies&);
};

#endif
