//
// Created by amits on 6/2/2019.
//

#include "Move.h"
#include <iostream>

Move::Move(std::string new_name, int new_damage, std::string new_type, std::string new_category,int new_accuracy,
           int new_pp, int new_perc_status, std::string description){

    name = new_name;
    damage = new_damage;
    type = new_type;
    category = new_category;
    accuracy = new_accuracy;
    pp = new_pp;
    perc_status = new_perc_status;
    this->description = description;

}

Move::~Move(){};

void Move::print_stats() {

    std::cout << "Name: " << name << "\n" << "Damage: " << damage << "\n" << "Type: " << type << "\n" << "Category: "
    << category <<  "\n" << "Accuracy: " << accuracy << "\n" << "PP: " << pp << "\n" << "Status Frequency: "
    << perc_status << "\n" << "Description: " << description <<"\n\n";
}