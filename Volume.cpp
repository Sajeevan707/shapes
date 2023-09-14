#include "Volume.hpp"
#include <cstdio>
#include <cmath>

Cube::Cube(int ndim, double len): ndim(ndim), len(len){}

int Cube::Ndim() {
    return ndim;
}

double Cube::Len() {
    return len;
}

void Cube::Ndim(int ndim) {
    this->ndim = ndim;
}

void Cube::Len(double len) {
    this->len = len;
}

double Cube::CVolume() {
    return pow(len, ndim);
}
