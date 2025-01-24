////
////  main.cpp
////  raylibBasics
////
////  Created by Daniel Berg on 23/01/25.
////
//
//#include "raylib.h"
//#include <iostream>
//
//using namespace std;
//
//int main(void) {
//
//    const int screenWidth = 800;
//    const int screenHeight = 450;
//    
//    InitWindow(screenWidth, screenHeight, "raylib test");
//    Image cowboyImage = LoadImage("/Users/danielberg/Desktop/all/study/raylibBasics/raylibBasics/assets/animation/0.png");
//    Texture2D cowboyTexture = LoadTextureFromImage(cowboyImage);
//    
//    Font zeroHourFont = LoadFont("/Users/danielberg/Desktop/all/study/raylibBasics/raylibBasics/assets/Zero Hour.otf");
//    
//    while(!WindowShouldClose()){
//        BeginDrawing();
//        
//        ClearBackground(LIGHTGRAY); //background
//        
//        
//        //ex: draw a line from (0,0) to (500,200)
//        DrawLineEx(Vector2(0,0), Vector2(screenWidth,screenHeight), 10, RED);
//        DrawLineEx(Vector2(screenWidth,0), Vector2(0,screenHeight), 10, RED);
//        
//        //
////        
////        DrawText("Red Dead Redemption", 300, 225, 20, ORANGE); //texto, posX, posY,fontSize, color
//        DrawTextEx(zeroHourFont, "Red Dead Redemption", Vector2(0,200), 20, 0, BLUE);
//        //using images
////        DrawTexture(LoadTexture("/Users/danielberg/Desktop/all/study/raylibBasics/raylibBasics/assets/spaceship.png"), 300, 300, WHITE);
//        //diff between texture and image: textures are loaded into te GPU, while images are into the cpu
//        //textures can be drawn but you cannot change them anymore. images should first be converted into
//        //a texture so it can be drawn, but you can change them
//        DrawTexture(cowboyTexture, 500, 310, WHITE);
//        
//   
//        
//        EndDrawing();
//    }
//    
//    CloseWindow();
//    
//    return 0;
//}
