#include <stdio.h>
#include <SFML/Graphics.hpp>
#include "../include/game.hpp"
#include "player.hpp"

int Game::initGame(){
    
    window.create(sf::VideoMode(1280, 720), "Aurora" );
    Game::window.setVerticalSyncEnabled(false);

    printf("Game successfully created! \n");
    
    Player player;
    Player player2;
    Player player3;

    GameObject::initGameObjects();
    
    return 0;
}

int Game::updateGame()
{
    
    sf::Event event;
        while (Game::window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                Game::window.close();
        }
    
    GameObject::renderGameObjects();
    Game::window.display();
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
