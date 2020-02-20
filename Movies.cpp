#include "Movies.h"
#include <sstream>

Movies::Movies() {
    this->name="";
    this->code="";
    this->countOfRentedCopies=0;
    Renter Renters[10];
}

Movies::Movies(std::string name, std::string code) {
    this->name = name;
    this->code = code;
    this->countOfRentedCopies=0;
    Renter Renters[10];
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

void Movies::getRenterID(int id){
    for (int i=0;i<sizeof(this->Renters);i++)
    {
        if(id == Renters[i].getRenterID())
        {
            Renter obj;
            Renters[i] = obj;
        }
    }
}

std::string Movies::getRenterInfo(){
    std::string strReturn = "";
    for (int i=0;i<sizeof(this->Renters);i++)
    {
        strReturn += "Renter's First Name: " + this->Renters[i].getFirstName() + "\n";
        strReturn += "Renter's Last Name: " + this->Renters[i].getLastName() + "\n";
        strReturn += "Renter's ID: " + to_string(this->Renters[i].getRenterID());
    }
    return strReturn;
}

ostream& operator<<(ostream& os, Movies& myMovie){
    std::string movieInfo;
    
    movieInfo += "Movie name: " + myMovie.name + '\n' + "Movie code: " + myMovie.code + "\n" +" Number of Renters: " + to_string(myMovie.countOfRentedCopies) + "\n" + myMovie.getRenterInfo();
    os << movieInfo;

    return os;

}