#include <SFML/Graphics.hpp>

class Game {
    public:
        int initGame();

        int updateGame();
        
        int renderGame();

        int exitGame();
        
        sf::Window window;
    private:
};