#include <gameObject.hpp>
#include <SFML/Graphics.hpp>

std::list<GameObject*> GameObject::gameObjects;

GameObject::GameObject()
{
    printf("Gameobject created \n");
    gameObjects.push_back(this);
}

void GameObject::init()
{

}

void GameObject::update()
{
    
}

void GameObject::render()
{
    
}

void GameObject::initGameObjects()
{
    for(GameObject* gameObject : GameObject::gameObjects){
        gameObject->init();
    }
}
