//
// Created by 72358 on 18/04/2024.
//

#ifndef EDD_1_POKEMON_H
#define EDD_1_POKEMON_H
#include <string>
#include <iostream>

using namespace std;

class pokemon {

protected:
    string name;
    string color;
    int damagePower;
    int health;

public:
    pokemon(const string &name, const string &color, int damagePower, int health);

    pokemon();

    virtual ~pokemon();

    const string &getName() const;

    void setName(const string &name);

    const string &getColor() const;

    void setColor(const string &color);

    int getDamagePower() const;

    void setDamagePower(int damagePower);

    int getHealth() const;

    void setHealth(int health);

    friend ostream &operator<<(ostream &os, const pokemon &pokemon);

    void heal(int h);

    void evolve(string n, string c, int pd, string nm);

    virtual void attack();
};


#endif //EDD_1_POKEMON_H
