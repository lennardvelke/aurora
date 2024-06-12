#include <SFML/Graphics.hpp>

class Game {
    public:
        Game();
        
        sf::RenderWindow window;

        int initGame();

        int updateGame();
        
        int renderGame();

        int exitGame();
        

        sf::RenderWindow& getWindow();
    private:
};