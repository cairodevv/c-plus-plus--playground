#ifndef CHARACTER
#define CHARACTER
#include "entity.h"
class Character : public Entity {
    public:
        int test {6};
        Character(std::array<float, 4> initSpriteSheetPosition) : Entity(initSpriteSheetPosition) {};
};
#endif 