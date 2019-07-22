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
//        for (int i = 0; i < 15; i++){
//            std::cout << i << line_space[i] << "\n";
//        }

          Move move(line_space[1],stoi(line_space[4]),line_space[5],line_space[6],stoi(line_space[7])
          ,stoi(line_space[8]),stoi(line_space[9]),line_space[14]);
    }

}

Move_Dictionary::~Move_Dictionary() {};

