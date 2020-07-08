//
// Created by amits on 5/29/2019.
//

#ifndef POKETRACKER_POKETRACKER_H
#define POKETRACKER_POKETRACKER_H
#define HP 1
#define ATK 2
#define DEF 3
#define SPA 4
#define SPD 5
#define SPE 6

#include <string>
#include <vector>
#include <iostream>
#include "Move.h"


class Pokemon {

    int index;
    std::string name;
    std::string nickname;
    std::string type1;
    std::string type2;
    int total;
    int hp;
    int attack;
    int defence;
    int sp_atk;
    int sp_def;
    int speed;
    int generation;
    std::string legendary;
    std::vector<Move*> moves;
    bool shiny;


public:
    Pokemon(int index, std::string name, std::string type1, int total_base, int hp_base,
            int attack_base, int defence_base, int sp_atk_base, int sp_def_base, int speed_base,
            int generation, std::string legendary, std::string type2 = "none", bool shiny = false);
    ~Pokemon();

    void print_pokemon();
    void print_bio();
    void print_stats();
    void print_moves();

    std::string get_name();
    std::string get_type1();
    std::string get_type2();
    int get_gen();
    int get_index();
    std::string get_legendary();

    void set_nickname(std::string new_name);
    void set_stat(int index, int new_stat);

    void learn_move(Move* move);
    void remove_move(std::string name);

};


#endif //POKETRACKER_POKETRACKER_H
