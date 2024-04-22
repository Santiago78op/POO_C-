//
// Created by 72358 on 19/04/2024.
//

#include "firePokemon.h"

firePokemon::firePokemon(const string &name, const string &color, int damagePower, int health, int degreesFireMax,
                         int shotFireBullet) : pokemon(name, color, damagePower, health),
                                               degreesFireMax(degreesFireMax), shotFireBullet(shotFireBullet) {}

firePokemon::~firePokemon() {

}

int firePokemon::getDegreesFireMax() const {
    return degreesFireMax;
}

void firePokemon::setDegreesFireMax(int degreesFireMax) {
    firePokemon::degreesFireMax = degreesFireMax;
}

int firePokemon::getBulletFireDegree() const {
    return bulletFireDegree;
}

void firePokemon::setBulletFireDegree(int bulletFireDegree) {
    firePokemon::bulletFireDegree = bulletFireDegree;
}

int firePokemon::getShotFireDegree() const {
    return shotFireDegree;
}

void firePokemon::setShotFireDegree(int shotFireDegree) {
    firePokemon::shotFireDegree = shotFireDegree;
}

void firePokemon::launchBullet(int bfd){
    firePokemon::bulletFireDegree  = bfd;
    firePokemon::shotFireDegree--;
}
