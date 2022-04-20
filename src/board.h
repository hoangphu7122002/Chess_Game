#ifndef BOARD_H
#define BOARD_H

#include "box.h"
#include <vector>
#include <iostream>
#include "piece.h"

using namespace std;

class Piece;

class Box;

class Board {
private:
    vector<vector<Box>> board;
    vector <Piece*> piece_killed;
public:
    Board();
    ~Board();
    void initializeBoard();
    Box getBox(int x,int y);
};

#endif