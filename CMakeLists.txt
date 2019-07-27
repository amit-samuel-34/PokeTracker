cmake_minimum_required(VERSION 3.12)
project(PokeTracker)

set(CMAKE_CXX_STANDARD 17)

add_executable(PokeTracker main.cpp Pokemon.cpp Pokemon.h Move.cpp Move.h Move_Dictionary.cpp Move_Dictionary.h Pokemom_Dictionary.cpp Pokemom_Dictionary.h)