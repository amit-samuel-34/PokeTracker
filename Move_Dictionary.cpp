//
// Created by amits on 6/25/2019.
//

#include "Move_Dictionary.h"

Move_Dictionary::Move_Dictionary() {


    std::ifstream file;
    file.open("Move_List.txt");
    if(!file.is_open()) return;

    Move* move_ptr;
    std::string line;
    while(std::getline(file, line)){
        std::vector<std::string> line_space;
        std::stringstream ss(line);
        std::string word;
        while(std::getline(ss,word,','))
            line_space.push_back(word);

        move_ptr = new Move(line_space[1],stoi(line_space[4]),line_space[5],line_space[6],stoi(line_space[7])
                ,stoi(line_space[8]),stoi(line_space[9]),line_space[14]);
        by_name[move_ptr->get_name()] = move_ptr;
        by_damage[move_ptr->get_damage()].push_back(move_ptr);
        by_type[move_ptr->get_type()].push_back(move_ptr);
//        for (std::map<std::string, Move*>::iterator it=by_name.begin(); it!=by_name.end(); ++it)
//            std::cout << it->first << " => " << it->second << '\n';
    }


}

Move_Dictionary::~Move_Dictionary() {};

// Shows the moves based on type and damage
void Move_Dictionary::show_moves(int key){
    std::vector<Move*> list;
    if(key < 18 && key > 0){ //checks if want to see moves of the same type
        list = by_type[type_map[key]];
        for(Move* move : list){
            move->print_stats();
        }
    }else{ //checks if want to see moves of the same damage output
        list = by_damage[key];
        for(Move* move : list){
            move->print_stats();
        }

    }
}


// Shows and individual move of a certain name
void Move_Dictionary::show_moves(std::string key){
    by_name[key]->print_stats();
}


// Finds a move object by the name
Move* Move_Dictionary::get_move(std::string name) {
    return by_name[name];
}

