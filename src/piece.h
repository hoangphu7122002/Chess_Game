#ifndef PIECE_H
#define PIECE_H

#include "board.h"
#include "box.h"
#include "Enums.h"

class Board;

class Box;

class Piece {
protected:
    bool color;
    bool killed;
    PieceType type;
public:
    Piece (bool color,PieceType type){
        this->color = color;
        this->killed = false; 
        this->type = type;
    }
    
    ~Piece();
    
    PieceType getType(){
        return this->type;
    }
    
    bool isWhite(){ 
        return this->color == true;
    }
    
    bool isKilled(){
        return this->killed;
    }
    
    virtual bool canMove(Board board, Box start, Box end) = 0;
};

class King : public Piece {
public:
    King(bool color) : Piece(color, PieceType::KING){};
    
    bool canMove(Board board, Box start, Box end) override;
};


class Queen : public Piece
{
public:
    Queen(bool color) : Piece(color,PieceType::QUEEN){}
    bool canMove(Board board, Box start, Box end) override;
};

class Bishop : public Piece
{
public:
    Bishop(bool color) : Piece(color,PieceType::BISHOP){}
    bool canMove(Board board, Box start, Box end) override;
};

class Rook : public Piece
{
public:
    Rook(bool color) : Piece(color,PieceType::ROOK){}
    bool canMove(Board board, Box start, Box end) override;
};

class Knight : public Piece
{
public:
    Knight(bool color) : Piece(color,PieceType::KNIGHT){}
    bool canMove(Board board, Box start, Box end) override;
};

class Pawn : public Piece
{
public:
    Pawn(bool color) : Piece(color,PieceType::PAWN){}
    bool canMove(Board board, Box start, Box end) override;
};

class None : public Piece {
public:
    None() : Piece(false,PieceType::NONE){};
    
    bool canMove(Board board, Box start, Box end) override;
};

#endif