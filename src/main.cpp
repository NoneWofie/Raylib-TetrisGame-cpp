#include "Blocks.cpp"
#include <Grid.hpp>
#include <raylib.h>

const Color darkBlue = {44, 44, 127, 255};

int main() {
  InitWindow(300, 600, "Raylib Tetris");

  // Set FPS
  SetTargetFPS(60);

  // Set up Grid Layout
  Grid grid = Grid{};
  grid.Print();

  TBlock block = TBlock();

  // Game Loop
  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(darkBlue);

    grid.Draw();
    block.Draw();

    EndDrawing();
  }

  CloseWindow();

  return 0;
}