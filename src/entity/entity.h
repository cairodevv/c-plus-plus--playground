#ifndef ENTITY
#define ENTITY
#include <array>
#include <vector>
#include <map>
#include <utility>
#include <string>

class Entity {
    public:
        std::array<float, 4> spriteSheetCoords;
        std::map<std::string, std::array<float, 4>> animations;
        std::pair<int, int> position;
        bool isVisible;
        
        
        void animate(std::string animationIdentifier);
        Entity(std::array<float, 4> initSpriteSheetPosition, std::pair<int, int> pos = {0, 0}, bool visibility = true)
         : spriteSheetCoords(initSpriteSheetPosition), position(pos), isVisible(visibility) {};
};        
#endif