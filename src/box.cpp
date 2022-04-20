#include "box.h"

Box::Box(int x,int y,Piece* piece){
    this->setPiece(piece);
    this->setX(x);
    this->setY(y);
}
    
Box::~Box(){

}

bool Box::hasPiece(){
    return piece->getType() == PieceType::NONE;
}

void Box::setPiece(Piece* piece){
    this->piece = piece;
}

void Box::setX(int x){
    this->x = x;
}

void Box::setY(int y){
    this->y = y;
}

Piece* Box::getPiece(){
    return this->piece;
}

int Box::getX(){
    return this->x;
}

int Box::getY(){
    return this->y;
}

void Box::clearPiece(){
    this->setPiece(new None());
};