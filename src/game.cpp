#include <stdio.h>
#include <SFML/Graphics.hpp>
#include "../include/game.hpp"
#include "player.hpp"

int Game::initGame(){
    
    window.create(sf::VideoMode(1280, 720), "Aurora" , sf::Style::Titlebar);
    window.setVerticalSyncEnabled(false);
    
    printf("Game successfully created! \n");
    
    return 0;
}

int Game::updateGame()
{
    Player player;

    sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.display();
    return 0;
}

int Game::renderGame()
{
    
    return 0;
}

int Game::exitGame()
{
    printf("Game successfully closed! \n");

    return 0;
}
