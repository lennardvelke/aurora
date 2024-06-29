#include "InputHandlerSystem.h"
#include "raylib.h"
#include "gameStates.h"

void InputHandler()
{
    if(IsKeyPressed(KEY_P)) 
        	drawDebugInfo = !drawDebugInfo;
}