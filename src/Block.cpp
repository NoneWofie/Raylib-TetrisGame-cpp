#include "Block.hpp"

Block::Block() {
  cellSize = 30;
  rotationState = 0;
  colors = getCellColors();
  rowOffset = 0;
  columnOffset = 0;
}

void Block::Draw() {
  std::vector<Position> tiles = GetCellPositions();

  for (Position item : tiles) {
    DrawRectangle(item.column * cellSize + 1, item.row * cellSize + 1,
                  cellSize - 1, cellSize - 1, colors[id]);
  }
}

void Block::Move(int rows, int columns) {
  rowOffset += rows;
  columnOffset += columns;
}

std::vector<Position> Block::GetCellPositions() {
  std::vector<Position> tiles = cells[rotationState];
  std::vector<Position> movedTiles;

  for (Position item : tiles) {
    Position newPos =
        Position(item.row + rowOffset, item.column + columnOffset);
    movedTiles.push_back(newPos);
  }
  return movedTiles;
}