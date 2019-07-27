//
// Created by amits on 5/29/2019.
//

#include "Pokemon.h"

Pokemon::Pokemon(std::string name, std::string type1, int total_base, int hp_base,
                 int attack_base, int defence_base, int sp_atk_base, int sp_def_base, int speed_base,
                 int generation, bool legendary,std::string type2, bool shiny){
    this->name = name;
    this->type1 = type1;
    this->type2 = type2;
    this->shiny = shiny;
}

Pokemon::~Pokemon() {}

void Pokemon::print_pokemon(){

    std::cout << "Name: " << name << "\n" << "Type: " << (!type2.compare("none") ? type1 + " and " + type2 + "\n"
    :type1 + "\n") << "Shiny: " <<  (shiny ? "Yes\n":"No\n") << "Moves: \n\n";
    this->print_moves();

}


std::string Pokemon::get_name(){
    return name;
}

std::string Pokemon::get_types(){
    return type1 + " " + type2;
}

void Pokemon::set_name(std::string new_name){
    name = new_name;
}

void Pokemon::set_types(std::string new_type1, std::string new_type2) {
    type1 = new_type1;
    type2 = new_type2;
}

void Pokemon::learn_move(Move* move) {

    if(moves.size() == 4 && name.compare("Metagross"))
        std::cout << "Maximum moves reached \n\n";
    else
        moves.push_back(move);
}

void Pokemon::remove_move(std::string name) {
    for(int i = 0; i < moves.size(); i++) {
        if(moves[i]->get_name().compare(name) == 0)
            moves.erase(moves.begin() + i);
    }
}

void Pokemon::print_moves() {
    for(int i = 0; i < moves.size(); i++){
        moves[i]->print_stats();
    }

}

