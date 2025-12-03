#include <iostream>
#include "entity.h"
#include "character.h"


int main() {
    Character lethe({0.0f, 0.0f, 1.0f, 1.0f});
    std::cout << lethe.spriteSheetCoords[2];
    std::cout << lethe.test;
    return 0;
}