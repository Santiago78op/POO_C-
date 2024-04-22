cmake_minimum_required(VERSION 3.27)
project(EDD_1)

set(CMAKE_CXX_STANDARD 17)

add_executable(EDD_1 main.cpp
        pokemon.cpp
        pokemon.h
        atleta.cpp
        waterPokemon.cpp
        waterPokemon.h
        cmake-build-debug/firePokemon.cpp
        cmake-build-debug/firePokemon.h
        pekemonEarth.cpp
        pekemonEarth.h
)
