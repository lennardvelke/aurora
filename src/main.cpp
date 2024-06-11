#include <SFML/Graphics.hpp>
#include "../include/game.hpp"
int main()
{
    Game game;

    game.initGame();

    while (game.window.isOpen())
    {
        game.updateGame();
        
        game.renderGame();
    }

    game.exitGame();
    
    return 0;
}