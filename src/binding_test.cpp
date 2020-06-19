//
// Created by Tousif Zaman on 6/12/2020.
//

#include "../include/binding_test.h"

int main(){
    std::cout << "Hello World! This is IGLSynth CMake." << std::endl;

    Player1 a1(99, "Archer A1");
    Player1 k1(55, "Knight K1");
    std::cout << a1.getHealth() << std::endl;
    a1.setHealth(10);
    std::cout << k1.getHealth() << std::endl;
    std::cout << a1.getHealth() << std::endl;
    Player1 v1;
    std::cout << v1.getHealth() << std::endl;
    std::cout << a1.getName() << std::endl;
    std::cout << k1.getName() << std::endl;
    std::cout << v1.getName() << std::endl;

    return 0;
}
