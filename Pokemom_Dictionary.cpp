//
// Created by amits on 7/26/2019.
//

#include "Pokemom_Dictionary.h"

Pokemom_Dictionary::Pokemom_Dictionary() {
    std::ifstream file;
    file.open("Pokemon_List.txt");
    if(!file.is_open()) return;

    std::string line;
    std::getline(file, line);
    while(std::getline(file, line)) {
        std::vector<std::string> line_space;
        std::stringstream ss(line);
        std::string word;
        while(std::getline(ss, word, ',')) {
            line_space.push_back(word);


        }
    }
}
