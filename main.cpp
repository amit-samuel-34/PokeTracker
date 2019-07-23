#include <iostream>
#include "Pokemon.h"
#include "Move_Dictionary.h"
void change_name(Pokemon* pokemon);

int main() {

    Pokemon pokemon1("Rapidash", "Fire");
    Pokemon pokemon2("Metagross", "Steel", "Psychic", true);
    Pokemon* Rapidash = &pokemon1;
    Pokemon* Metagross = &pokemon2;

//    Metagross->learn_move("Meteor Mash", 100, "Steel", "Physical");
//    Metagross->learn_move("Psychic", 90, "Psychic", "Special");
//    Metagross->learn_move("Agility", 0, "Psychic", "Status");
//    Metagross->learn_move("Iron Defense", 0, "Steel", "Status");
//    Metagross->learn_move("Earthquake", 100, "Ground", "Physical");

    Move_Dictionary move;
    move.get_moves("METEORMASH");


    //Metagross->print_moves();
//    Metagross->print_pokemon();
//    std::cout << pokemon1.get_types();
//    std::cout << "Before any changed: " << pokemon1.get_name();
//    change_name(&pokemon1);
//    std::cout << "After Method call: " << pokemon1.get_name();
    return 0;
}

void change_name(Pokemon* pokemon){

    pokemon->set_name("Magmar");

}
