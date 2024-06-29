#pragma


#include <raylib.h>


#include "debug.h"


/*
    Shows Debug Info in screen
*/
void ShowDebugInfo()
{
    Color color = LIME;                         // Good FPS
    int fps = GetFPS();

    if ((fps < 30) && (fps >= 15)) color = ORANGE;  // Warning FPS
    else if (fps < 15) color = RED;             // Low FPS

    DrawText(TextFormat("FPS: %2i", fps), 20, 20, 14, color);

    DrawText(TextFormat("DeltaTime: %f", GetFrameTime()), 20, 30, 14, LIME);

    DrawRectangle(10,10,200,200, {50,50,150,100});
}
