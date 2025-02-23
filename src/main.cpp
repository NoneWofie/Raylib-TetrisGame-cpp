#include <Grid.hpp>
#include <raylib.h>

const Color darkBlue = {44, 44, 127, 255};

int main() {
  InitWindow(300, 600, "Raylib Tetris");

  // Set FPS
  SetTargetFPS(60);

  // Set up Grid Layout
  Grid grid = Grid{};
  grid.grid[0][0] = 1;
  grid.grid[3][5] = 4;
  grid.grid[17][8] = 7;
  grid.Print();

  // Game Loop
  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(darkBlue);

    grid.Draw();

    EndDrawing();
  }

  CloseWindow();

  return 0;
}