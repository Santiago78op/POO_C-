//
// Created by 72358 on 19/04/2024.
//

#ifndef EDD_1_PEKEMONEARTH_H
#define EDD_1_PEKEMONEARTH_H


#include "pokemon.h"

class pekemonEarth: public pokemon {

private:
    int depthScabEarthMax;
    int scabEarth;

public:
    pekemonEarth(const string &name, const string &color, int damagePower, int health, int depthScabEarthMax,
                 int scabEarth);

    ~pekemonEarth() override;

    int getDepthScabEarthMax() const;

    void setDepthScabEarthMax(int depthScabEarthMax);

    int getScabEarth() const;

    void setScabEarth(int scabEarth);

    void scabTunnel(int st);

    void shotBall();

    void attack() override{shotBall();}
};


#endif //EDD_1_PEKEMONEARTH_H
