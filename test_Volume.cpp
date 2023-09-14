#include "Volume.hpp"
#include <cstdio>
#include <iostream>
#include <cmath>

int main() {
    Cube cube3D(3, 4.0);
    Cube cube5D(5, 4.0);
    Cube cube8D(8, 4.0);

    std::cout << "3d Cube: ";
    cube3D.Print();
    std::cout << "5d Cube: ";
    cube5D.Print();
    std::cout << "8d Cube: ";
    cube8D.Print();

    return 0;
}
