#include "Game.hpp"
#include <raylib.h>

const Color darkBlue = { 44, 44, 127, 255 };

// Continue at 1:07:28

int main() {
  InitWindow(300, 600, "Raylib Tetris");

  // Set FPS
  SetTargetFPS(60);

  // Game Object
  Game game = Game{};

  // Game Loop
  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(darkBlue);

    game.Draw();

    EndDrawing();
  }

  CloseWindow();

  return 0;
}