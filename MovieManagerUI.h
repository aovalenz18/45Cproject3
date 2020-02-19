#ifndef MOVIEMANAGERUI_H_
#define MOVIEMANAGERUI_H_


#include "Movies.h"

class MovieManagerUI{

    public:
        static void printMenu();
        std::string getCommand();
        Movies addMoviePrompt();
        std::string discMoviePrompt();

};

#endif
