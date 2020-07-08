//
// Created by amits on 7/26/2019.
//

#ifndef POKETRACKER_Pokemon_DICTIONARY_H
#define POKETRACKER_Pokemon_DICTIONARY_H

#include <map>
#include <vector>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include "Pokemon.h"

class Pokemon_Dictionary {

    std::map<std::string, std::vector<Pokemon*>> by_type; //Maps a type to a list of pokemon
    std::map<std::string, Pokemon*> by_name; //Maps a name to a pokemon object
    std::map<int, std::vector<Pokemon*>> by_gen; //Map a generation to a list of pokemon
    std::map<int, Pokemon*> by_index; //Maps a pokedex number to a pokemon
    std::vector<Pokemon*> legends; //List of legendary pokemon

public:
    Pokemon_Dictionary(void);
    ~Pokemon_Dictionary();

};


#endif //POKETRACKER_Pokemon_DICTIONARY_H
