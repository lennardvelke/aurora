#include <stdio.h>
#include <SFML/Graphics.hpp>
#include "player.hpp"
#include "game.hpp"

Game::Game(){
    getWindow().create({1280u, 720u}, "Aurora");
}

int Game::initGame(){

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
    GameObject::renderGameObjects(getWindow());
    
    return 0;
}

int Game::exitGame()
{
    printf("Game successfully closed! \n");

    return 0;
}

sf::RenderWindow& Game::getWindow()
{
    return window;
}
