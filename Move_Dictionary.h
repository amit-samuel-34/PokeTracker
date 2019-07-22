//
// Created by amits on 6/25/2019.
//

#ifndef POKETRACKER_MOVE_DICTIONARY_H
#define POKETRACKER_MOVE_DICTIONARY_H

#include <map>
#include <vector>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include "Move.h"


class Move_Dictionary {

    std::map<std::string, std::vector<Move>> by_type;
    std::map<int, std::vector<Move>> by_damage;


public:
    Move_Dictionary(void);
    ~Move_Dictionary();





};


#endif //POKETRACKER_MOVE_DICTIONARY_H
