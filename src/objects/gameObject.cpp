#include <gameObject.hpp>
#include <game.hpp>
#include <SFML/Graphics.hpp>

std::list<GameObject*> GameObject::gameObjects;

GameObject::GameObject()
{
    gameObjects.push_back(this);
}

void GameObject::init()
{
    printf("GameObject created!  \n");
}

void GameObject::update()
{
    
}

void GameObject::render(sf::RenderWindow& window)
{
    sf::RectangleShape shape(sf::Vector2f(32, 32));
    //Game::window.draw(shape);
    //window->draw(shape);
}

void GameObject::initGameObjects()
{
    for(GameObject* gameObject : GameObject::gameObjects){
        gameObject->init();
    }
}

void GameObject::renderGameObjects(sf::RenderWindow& window)
{
    for(GameObject* gameObject : GameObject::gameObjects){
        gameObject->render(window);
    }
}
