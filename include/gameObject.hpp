#include <SFML/Graphics.hpp>

class GameObject{
    public:
        sf::Vector2f position = sf::Vector2f(0,0); 
        
        float rotation = 0; 

        virtual void init();

        virtual void update();

        virtual void render();

};