#include "Stazione.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <string>



class Controller{
private:
    const int delta_t = 12;//12 secondi tempo di avs a max speed di fare un km
    std::vector<Stazione> stazioni;
    std::vector<Treno> treni;
    int tempo; //variabile indipendente di tempo
    bool fine = false;


public:
    Controller(std::ifstream line_d, std::ifstream time_t);//in input i 2 file, inizializza vector/array di stazioni e treni
    void update(); //
    bool fine(){return fine;}


};