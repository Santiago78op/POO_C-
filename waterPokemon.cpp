//
// Created by 72358 on 19/04/2024.
//

#include "waterPokemon.h"

waterPokemon::waterPokemon(const string &name, const string &color, int damagePower, int health, int underWaterMax,
                           int underWaterTime) : pokemon(name, color, damagePower, health),
                                                 underWaterMax(underWaterMax), underWaterTime(underWaterTime) {}

waterPokemon::~waterPokemon() {

}

int waterPokemon::getUnderWaterMax() const {
    return underWaterMax;
}

void waterPokemon::setUnderWaterMax(int underWaterMax) {
    waterPokemon::underWaterMax = underWaterMax;
}

int waterPokemon::getUnderWaterTime() const {
    return underWaterTime;
}

void waterPokemon::setUnderWaterTime(int underWaterTime) {
    waterPokemon::underWaterTime = underWaterTime;
}

void waterPokemon::breatherPokemon(){
    waterPokemon::underWaterTime = 0;
}