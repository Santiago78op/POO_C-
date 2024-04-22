//
// Created by 72358 on 19/04/2024.
//

#ifndef EDD_1_FIREPOKEMON_H
#define EDD_1_FIREPOKEMON_H

#include "../pokemon.h"

class firePokemon : public pokemon{

private:
    int degreesFireMax;
    int bulletFireDegree;
    int shotFireDegree;

public:
    firePokemon(const string &name, const string &color, int damagePower, int health, int degreesFireMax,
                int shotFireBullet);

    ~firePokemon() override;

    int getDegreesFireMax() const;

    void setDegreesFireMax(int degreesFireMax);

    int getBulletFireDegree() const;

    void setBulletFireDegree(int bulletFireDegree);

    int getShotFireDegree() const;

    void setShotFireDegree(int shotFireDegree);

    void launchBullet(int bfd);
};


#endif //EDD_1_FIREPOKEMON_H
