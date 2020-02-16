#include "Renter.h"

int Renter::getRenterID(){
    return this->renterID;
}

void Renter::setRenterID(int id){
    this->renterID = id;
}

std::string Renter::getFirstName(){
    return this->firstName;
}

void Renter::setFirstName(std::string first){
    this->firstName = first;
}

std::string Renter::getLastName(){
    return this->lastName;
}

void Renter::setLastName(std::string last){
    this->lastName = last;
}
