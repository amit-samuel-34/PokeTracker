//
// Created by amits on 5/29/2019.
//

#ifndef POKETRACKER_POKETRACKER_H
#define POKETRACKER_POKETRACKER_H
#include <string>
#include <vector>
#include <iostream>
#include "Move.h"


class Pokemon {

    std::string name;
    std::string type1;
    std::string type2;
    std::vector<Move> moves;
    bool shiny;


public:
    Pokemon(std::string name, std::string type1, std::string type2 = "none", bool shiny = false);
    ~Pokemon();

    void print_pokemon();

    std::string get_name();
    std::string get_types();

    void set_name(std::string new_name);
    void set_types(std::string new_type1, std::string new_type2);

    void learn_move(std::string name);
    void print_moves();

};


#endif //POKETRACKER_POKETRACKER_H
