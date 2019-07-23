//
// Created by amits on 5/29/2019.
//

#include "Pokemon.h"

Pokemon::Pokemon(std::string this_name, std::string this_type1, std::string this_type2, bool this_shiny){
    name = this_name;
    type1 = this_type1;
    type2 = this_type2;
    shiny = this_shiny;
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

//void Pokemon::learn_move(std::string name) {
//
//    if(moves.size() == 4 && name.compare("Metagross"))
//        std::cout << "Maximum moves reached \n\n";
//    else
//        moves.push_back();
//}

void Pokemon::print_moves() {
    for(int i = 0; i < moves.size(); i++){
        moves[i]->print_stats();
    }

}

