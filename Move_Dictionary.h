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

    std::map<std::string, std::vector<Move*>> by_type;
    std::map<int, std::vector<Move*>> by_damage;
    std::map<std::string, Move*> by_name;
    std::map<int, std::string> type_map = {{1,"WATER"}, {2, "FIRE"}, {3, "GRASS"}, {4, "BUG"}, {5, "DARK"},
                                           {6, "DRAGON"}, {7, "ELECTRIC"}, {8, "FIGHTING"}, {9, "FLYING"},
                                           {10, "GHOST"}, {11, "GROUND"}, {12, "ICE"}, {13, "NORMAL"},
                                           {14, "POISON"}, {15, "PSYCHIC"}, {16, "ROCK"}, {17, "STEEL"}};



public:
    Move_Dictionary(void);
    ~Move_Dictionary();

    void get_moves(int key);
    void get_moves(std::string name);
};


#endif //POKETRACKER_MOVE_DICTIONARY_H
