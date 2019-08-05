//
// Created by amits on 5/29/2019.
//

#include "Pokemon.h"

Pokemon::Pokemon(int index, std::string name, std::string type1, int total_base, int hp_base,
                 int attack_base, int defence_base, int sp_atk_base, int sp_def_base, int speed_base,
                 int generation, std::string legendary,std::string type2, bool shiny){
    this->index = index;
    this->name = name;
    this->nickname = name;
    this->type1 = type1;
    this->type2 = type2;
    this->total = total_base;
    this->hp = hp_base;
    this->attack = attack_base;
    this->defence = defence_base;
    this->sp_atk = sp_atk_base;
    this->sp_def = sp_def_base;
    this->speed = speed_base;
    this->generation = generation;
    this->legendary = legendary;
    this->shiny = shiny;
}

Pokemon::~Pokemon() {}

void Pokemon::print_pokemon(){

    print_bio();
    print_stats();
    print_moves();

}

void Pokemon::print_bio() {

    //Print out the general info of a pokemon
    std::cout <<"===BIOGRAPHY===\n" << "Name:       " <<  name << " #" << index  << "\n" << "Type:       "
    << (!type2.compare("none") ? type1 +  " and " + type2 + "\n" : type1 + "\n") << "Shiny:      "
    <<  (shiny ? "Yes\n":"No\n") << "Legendary:  " << (legendary.compare("True") ? "No\n":"Yes\n") << "\n"
    << "Generation: "  << generation << "\n\n";
}

void Pokemon::print_stats() {

    //Print out the stats of a pokemon
    std::cout << "===STATSISTICS===\n" << "Total:           " << total << "\n" << "HP:              " << hp
    << "\n" << "Attack:          " << attack  << "\n" << "Defence:         " << defence << "\n" <<
    "Special Attack:  " << sp_atk << "\n" << "Special Defence: " <<  sp_def << "\n" << "Speed:           "
    << speed << "\n\n";

}

void Pokemon::print_moves() {

    //Print out the moves of a pokemon
    std::cout << "===MOVES===\n";
    for(int i = 0; i < moves.size(); i++){
        moves[i]->print_stats();
    }
    std::cout << "\n\n";
}



std::string Pokemon::get_name(){
    return name;
}



void Pokemon::set_nickname(std::string new_name){
    nickname = new_name;
}

void Pokemon::set_stat(int index, int new_stat) {

    switch (index) {
        case HP:
            hp = new_stat;
            break;
        case ATK:
            attack = new_stat;
            break;
        case DEF:
            defence = new_stat;
            break;
        case SPA:
            sp_atk = new_stat;
            break;
        case SPD:
            sp_def = new_stat;
            break;
        case SPE:
            speed = new_stat;
            break;
        default:
            std::cout << "That is not a stat!!";

        total = hp + attack + defence + sp_atk + sp_def + speed;
    }

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


