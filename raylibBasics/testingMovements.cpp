//
//  testingMovements.cpp
//  raylibBasics
//
//  Created by Daniel Berg on 23/01/25.
//

#include "raylib.h"
#include <iostream>

using namespace std;

int main(void){
    
    //variables
    int screenWidth = 800, screenHeight = 450;
    float shipSpeed = 120;
    Vector2 shipPosition = Vector2(0,0);
    Vector2 shipDirection = Vector2(1,1);
    
    //declarations
    InitWindow(screenWidth, screenHeight, "Movements");
    Texture2D ship = LoadTexture("/Users/danielberg/Desktop/all/study/raylibBasics/raylibBasics/assets/spaceship.png");
    
    while (!WindowShouldClose()) {
        
        //updates
        double deltaTime = GetFrameTime();
        shipPosition.x += shipDirection.x * shipSpeed * deltaTime;
        shipPosition.y += shipDirection.y * shipSpeed* deltaTime;
        
        if(shipPosition.y >= screenHeight - 40) {
            shipDirection.y = -1;
        }
        
        if(shipPosition.x >= screenWidth - 100) {
            shipDirection.x = -1;
        }
        
        if(shipPosition.y <= 0){
            shipDirection.y = 1;
        }
        
        if(shipPosition.x <= 0){
            shipDirection.x = 1;
        }
        
        //drawing
        BeginDrawing();
        ClearBackground(BLACK);
        
        DrawTextureV(ship, shipPosition, WHITE);
    
        DrawFPS(0, 0);
        EndDrawing();
    }
    CloseWindow();
}

