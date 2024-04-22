//
// Created by 72358 on 19/04/2024.
//

#ifndef EDD_1_WATERPOKEMON_H
#define EDD_1_WATERPOKEMON_H

#include "pokemon.h"

class waterPokemon : public pokemon{

private:
    int underWaterMax;
    int underWaterTime;

public:
    waterPokemon(const string &name, const string &color, int damagePower, int health, int underWaterMax,
                 int underWaterTime);

    ~waterPokemon() override;

    int getUnderWaterMax() const;

    void setUnderWaterMax(int underWaterMax);

    int getUnderWaterTime() const;

    void setUnderWaterTime(int underWaterTime);

    void breatherPokemon();
};


#endif //EDD_1_WATERPOKEMON_H
