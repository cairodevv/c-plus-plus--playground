#ifndef ENTITY
#define ENTITY
#include <array>
class Entity {
    public:
        std::array<float, 4> spriteSheetCoords;
        Entity(std::array<float, 4> initSpriteSheetPosition) : spriteSheetCoords(initSpriteSheetPosition) {};
};        
#endif