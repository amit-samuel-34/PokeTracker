//
// Created by amits on 6/25/2019.
//

#include "Move_Dictionary.h"

Move_Dictionary::Move_Dictionary() {


    std::ifstream file;
    file.open("Move_List.txt");
    if(!file.is_open()) return;

    std::string line;
    while(std::getline(file, line)){
        std::vector<std::string> line_space;
        std::stringstream ss(line);
        std::string word;
        while(std::getline(ss,word,',')){
            line_space.push_back(word);
            //std::cout << word << " ";
        }
        std::cout<< line_space[14];
        std::cout<< "\n";

//          Move move(line_space[1],line_space[4],line_space[5],line_space[6],line_space[7],line_space[8],line_space[9],
//          line_space[14]);
//        for(std::string wor: line_space)
//            std::cout << wor << ' ';
//        std::cout << '\n';
    }

}

Move_Dictionary::~Move_Dictionary() {};

