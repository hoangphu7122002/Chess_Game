#ifndef BOX_H
#define BOX_H

#include "piece.h"
#include "Enums.h"

class Piece;

class Box {
private:
    Piece* piece;
    int x;
    int y;
public:
    Box(int x,int y,Piece* piece);
    Box(){
        this->piece = nullptr;
        this->x = -1;
        this->y = -1;
    }
    ~Box();
    
    bool hasPiece();
    
    //set method
    void setPiece(Piece* piece);
    void setX(int x);
    void setY(int y);
    
    //get method
    Piece* getPiece();
    int getX();
    int getY();
    
    void clearPiece();
};

#endif