#pragma once
#include "Colors.hpp"
#include <Position.hpp>
#include <map>
#include <vector>

class Block {
public:
  Block();
  void Draw();
  int id; // Each block type has a unique id
  std::map<int, std::vector<Position>> cells;

private:
  int cellSize;
  int rotationState;
  std::vector<Color> colors;
};