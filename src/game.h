#ifndef GAME_H
#define GAME_H

#include "Enums.h"
#include "board.h"
#include "player.h"
#include "move.h"
#include "box.h"

class Game {
private:
    Board board;
    Player player1;
    Player player2;
    vector <Move> moveList;
    bool currentTurn;
    StatusGame status;
public:
    Game(Player p1, Player p2);
    ~Game();
    bool validMove();
    void makeMove();
    void playerMove(Player player, int startX, int startY, int endX, int endY);
    bool isOver();
};

#endif