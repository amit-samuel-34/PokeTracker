//
// Created by amits on 6/2/2019.
//

#ifndef POKETRACKER_MOVE_H
#define POKETRACKER_MOVE_H

#include <string>
#include <map>
#include <vector>



class Move {

    std::map<std::string, std::vector<Move>> move_by_name;
    std::string name;
    int damage;
    std::string type;
    std::string category;
    int accuracy;
    int pp;
    int perc_status;
    std::string description;

public:
    Move(std::string new_name, int new_damage, std::string new_type, std::string new_category,int new_accuracy,
            int new_pp, int new_perc_status, std::string description);
    ~Move();
    void print_stats();
    std::string get_name();
    int get_damage();
    std::string get_type();
};


#endif //POKETRACKER_MOVE_H
