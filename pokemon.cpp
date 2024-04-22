//
// Created by 72358 on 18/04/2024.
//

#include "pokemon.h"
pokemon::pokemon(const string &name, const string &color, int damagePower, int health) : name(name), color(color),
                                                                                         damagePower(damagePower),
                                                                                         health(health) {}
pokemon::pokemon() {
    name = "Pikachu";
    color = "yellow";
    damagePower = 100;
    health = 100;
}

const string &pokemon::getName() const {
    return name;
}

void pokemon::setName(const string &name) {
    pokemon::name = name;
}

const string &pokemon::getColor() const {
    return color;
}

void pokemon::setColor(const string &color) {
    pokemon::color = color;
}

int pokemon::getDamagePower() const {
    return damagePower;
}

void pokemon::setDamagePower(int damagePower) {
    pokemon::damagePower = damagePower;
}

int pokemon::getHealth() const {
    return health;
}

void pokemon::setHealth(int health) {
    pokemon::health = health;
}

ostream &operator<<(ostream &os, const pokemon &pokemon) {
    os << "name: " << pokemon.name << " color: " << pokemon.color << " damagePower: " << pokemon.damagePower
       << " health: " << pokemon.health;
    return os;
}

pokemon::~pokemon() {
    cout << "Pokemon eliminado: " << name;
}

void pokemon::heal(int h) {
    if ( h < 0){
        health = 100;
    };
}

void pokemon::evolve(string n, string c, int pd, string nm) {
    if(nm == name){
        name = n;
        color = c;
        pd = damagePower + ((20 * damagePower)/100);
        damagePower = pd;
    };
}

void pokemon::attack() {

}
