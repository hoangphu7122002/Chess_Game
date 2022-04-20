#include "move.h"

void Move::setBoxStart(Box start){
    this->start = start;
}

void Move::setBoxEnd(Box end){
    this->end = end;
}

void Move::setPlayer(Player player){
    this->player = player;
}

void Move::setPieceMoved(Piece* pieceMoved){
    this->pieceMoved = pieceMoved;  
};

void Move::setPieceKilled(Piece* pieceKilled){
    this->pieceKilled = pieceKilled;
}

Move::Move(Player player, Box start, Box end){
    this->setBoxStart(start);
    this->setBoxEnd(end);
    this->setPlayer(player);
    this->pieceKilled = new None();
    this->pieceMoved = new None();
}

Box Move::getBoxStart(){
    return this->start;
}

Box Move::getBoxEnd(){
    return this->end;
}

Player Move::getPlayer(){
    return this->player;
}

Piece* Move::getPieceMoved(){
    return this->pieceMoved;
}

Piece* Move::getPieceKilled(){
    return this->pieceKilled;
}

Move::~Move(){

}

bool Move::isCastlingMove(){
    return this->CastlingMove == true;
}

bool Move::isKillingMove(){
    return this->KillingMove == true;
}