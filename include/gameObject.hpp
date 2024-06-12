#include <SFML/Graphics.hpp>
#include <algorithm>
#include <iostream>
#include <list>


class GameObject{
    public:
        static std::list<GameObject*> gameObjects;
        
        sf::Vector2f position = sf::Vector2f(0,0); 
        
        float rotation = 0; 

        GameObject();

        virtual void init();

        virtual void update();

        virtual void render(sf::RenderWindow& window);

        static void initGameObjects();

        static void renderGameObjects(sf::RenderWindow& window);

};