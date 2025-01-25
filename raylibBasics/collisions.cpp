//
//  collisions.cpp
//  raylibBasics
//
//  Created by Daniel Berg on 24/01/25.
//

#include <iostream>
#include "raylib.h"
using namespace std;

int main(){
    
    const int screenWidth = 800, screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "Collsions");
    
    Vector2 playerPosition(0,0);
    Vector2 obstaclePosition(500,300);
    int playerRadius = 50, obstacleRadius = 30;
    
    Rectangle r1 = Rectangle(0,0,100,200);
    Rectangle r2 = Rectangle(400,200,200,300);
    
    while (!WindowShouldClose()) {
        //input
        playerPosition = GetMousePosition();
        r1.x = GetMouseX();
        r1.y = GetMouseY();
        
        //collision
        cout << CheckCollisionCircles(playerPosition, playerRadius, obstaclePosition, obstacleRadius);
        Rectangle overlapRectangle = GetCollisionRec(r1, r2);
        
        if (CheckCollisionCircleRec(playerPosition, playerRadius, r1)) {
            DrawText("YOU LOST", 400, 220, 50, BLACK);
        }
        
        
        //drawing
        BeginDrawing();
        ClearBackground(LIGHTGRAY);
//        DrawCircleV(playerPosition, playerRadius, WHITE);
        DrawCircleV(obstaclePosition, obstacleRadius, RED);
        DrawRectangleRec(r1, BLUE);
        DrawRectangleRec(r2, GREEN);
        
        EndDrawing();
    }
    CloseWindow();
}
