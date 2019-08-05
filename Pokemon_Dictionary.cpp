//
// Created by amits on 7/26/2019.
//

#include "Pokemon_Dictionary.h"

Pokemon_Dictionary::Pokemon_Dictionary() {
    std::ifstream file;
    file.open("Pokemon_List.txt");
    if(!file.is_open()) return;

    std::string line;
    std::getline(file, line);
    Pokemon* pokemon;
    while(std::getline(file, line)) {
        std::vector<std::string> line_space;
        std::stringstream ss(line);
        std::string word;
        while(std::getline(ss, word, ','))
            line_space.push_back(word);

        pokemon = new Pokemon(stoi(line_space[0]), line_space[1], line_space[2], stoi(line_space[4]), stoi(line_space[5]),
                stoi(line_space[6]), stoi(line_space[7]), stoi(line_space[8]), stoi(line_space[9]), stoi(line_space[10]),
                stoi(line_space[11]), line_space[12], line_space[3]);




    }
}
