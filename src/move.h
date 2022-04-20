#ifndef MOVE_H
#define MOVE_H

#include "piece.h"
#include "player.h"
#include "Enums.h"

class Player;

class Move{
private:
    Player player;
    Box start;
    Box end;
    bool KillingMove;
    bool CastlingMove;
    Piece* pieceMoved;
    Piece* pieceKilled;
public:
    Move(Player player, Box start, Box end);
    Move(){};
    ~Move();
    
    void setPlayer(Player player);
    void setBoxStart(Box start);
    void setBoxEnd(Box end);
    void setPieceMoved(Piece* pieceMoved);
    void setPieceKilled(Piece* pieceKilled);
    
    Player getPlayer();
    Box getBoxStart();
    Box getBoxEnd();
    Piece* getPieceMoved();
    Piece* getPieceKilled();
    
    bool isCastlingMove();
    bool isKillingMove();
};


#endif