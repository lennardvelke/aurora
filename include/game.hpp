#include <SFML/Graphics.hpp>

class Game {
    public:
        int initGame();

        int updateGame();
        
        int renderGame();

        int exitGame();
        
        static sf::Window window;
    private:
};