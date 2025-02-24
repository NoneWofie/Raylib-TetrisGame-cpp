#pragma once
#include "Blocks.hpp"
#include "Grid.hpp"

class Game {
public:
  Game();
  Block GetRandomBlock();
  std::vector<Block> GetAllBlocks();
  void Draw();
  Grid grid;

private:
  std::vector<Block> blocks;
  Block currentBlock;
  Block nextBlock;
};