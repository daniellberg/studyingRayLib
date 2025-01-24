//
//  keyBoardMouseMoves.cpp
//  raylibBasics
//
//  Created by Daniel Berg on 23/01/25.
//

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
    Vector2 shipDirection = Vector2(0,0);
    
    //declarations
    InitWindow(screenWidth, screenHeight, "Movements");
    Texture2D ship = LoadTexture("/Users/danielberg/Desktop/all/study/raylibBasics/raylibBasics/assets/spaceship.png");
    SetExitKey(KEY_ESCAPE);
    
    while (!WindowShouldClose()) {
        
        //mouse input
//        Vector2 mousePosition = GetMousePosition();
//        shipPosition = mousePosition;
//        if (IsMouseButtonPressed(0)){
//            DrawText("Button pressed!", 400, 220, 50, RED);
//        }
        
        //keyboard input
        
        shipDirection.x = (int(IsKeyDown(KEY_D)) - int(IsKeyDown(KEY_A)));
        shipDirection.y = (int(IsKeyDown(KEY_S)) - int(IsKeyDown(KEY_W)));
        
        //update
        double deltaTime = GetFrameTime();
        shipPosition.x += shipDirection.x * shipSpeed * deltaTime;
        shipPosition.y += shipDirection.y * shipSpeed * deltaTime;
        
        //drawing
        BeginDrawing();
        ClearBackground(BLACK);
        DrawTextureV(ship, shipPosition, WHITE);
        EndDrawing();
    }
    CloseWindow();
}

