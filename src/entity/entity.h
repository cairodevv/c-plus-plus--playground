#ifndef ENTITY
#define ENTITY
#include <array>
#include <vector>
#include <map>
#include <utility>
#include <string>

class Entity {
    public:
        std::array<float, 4> initSpriteSheetCoords;
        std::map<std::string, std::array<float, 4>> animations;
        std::pair<int, int> position;
        bool isVisible;
        double health;
        
        void animate(std::string animationIdentifier);
        Entity(
            std::pair<int, int> pos, 
            bool visibility,
            double initHealth
        )
         : position{pos}, isVisible{visibility}, health{initHealth} {};
};        
#endif