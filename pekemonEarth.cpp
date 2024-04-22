//
// Created by 72358 on 19/04/2024.
//

#include "pekemonEarth.h"

pekemonEarth::pekemonEarth(const string &name, const string &color, int damagePower, int health, int depthScabEarthMax,
                           int scabEarth) : pokemon(name, color, damagePower, health),
                                            depthScabEarthMax(depthScabEarthMax), scabEarth(scabEarth) {}

pekemonEarth::~pekemonEarth() {

}

int pekemonEarth::getDepthScabEarthMax() const {
    return depthScabEarthMax;
}

void pekemonEarth::setDepthScabEarthMax(int depthScabEarthMax) {
    pekemonEarth::depthScabEarthMax = depthScabEarthMax;
}

int pekemonEarth::getScabEarth() const {
    return scabEarth;
}

void pekemonEarth::setScabEarth(int scabEarth) {
    pekemonEarth::scabEarth = scabEarth;
}

void pekemonEarth:: scabTunnel(int st) {
    pekemonEarth::scabEarth = st;
}

void pekemonEarth::shotBall() {

}