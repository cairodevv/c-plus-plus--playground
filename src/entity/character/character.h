#ifndef CHARACTER
#define CHARACTER
#include "../entity.h"
class Character : public Entity {
    public:
        int test {6};

        void moveLeft();
        void moveRight();
        void jump();
        void duck();
        Character(std::array<float, 4> initSpriteSheetPosition, std::pair<int, int> pos, bool visibility)
         : Entity(initSpriteSheetPosition, pos, visibility) {};
};
#endif 