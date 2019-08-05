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

    std::map<std::string, std::vector<Pokemon>> by_type;
    std::map<std::string, Pokemon> by_name;
    std::map<int, std::vector<Pokemon>> by_gen;
    std::map<int, Pokemon> by_index;
    std::vector<Pokemon> legends;

public:
    Pokemon_Dictionary(void);
    ~Pokemon_Dictionary();

};


#endif //POKETRACKER_Pokemon_DICTIONARY_H
