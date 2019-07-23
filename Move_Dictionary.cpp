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

void Move_Dictionary::get_moves(int key){
    std::vector<Move*> type_list;
    if(key < 18 && key > 0){
        type_list = by_type[type_map[key]];
        for(Move* move : type_list){
            move->print_stats();
        }
    }else{
        type_list = by_damage[key];
        for(Move* move : type_list){
            move->print_stats();
        }

    }
}


void Move_Dictionary::get_moves(std::string key){
    by_name[key]->print_stats();
}

