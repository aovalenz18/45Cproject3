#ifndef RENTER_H_
#define RENTER_H_

#include "Exceptions.cpp"

class Renter{
private:
    int renterID;
    std::string firstName, lastName;

public:
    int getRenterID();
    void setRenterID(int id);

    std::string getFirstName();
    void setFirstName(std::string first);

    std::string getLastName();
    void setLastName(std::string last);
};

#endif
