#include "game.h"

Game::Game(Player p1, Player p2){
    this->player1 = p1;
    this->player2 = p2;
    
    this->board.initializeBoard();
    if (p1.isWhiteUser()){
        this->currentTurn = true;
    }
    else {
        this->currentTurn = false;
    }
}
Game::~Game(){

}

bool Game::validMove(){
    return true;
}

void Game::makeMove(){
    
}

void Game::playerMove(Player player, int startX, int startY, int endX, int endY){
    Box start = this->board.getBox(startX,startY);
    Box end = this->board.getBox(endX,endY);
    Piece* sourcePiece = start.getPiece();
    if (sourcePiece->canMove(this->board,start,end)){
        Piece* destPiece = end.getPiece();
        if (destPiece == nullptr){
            destPiece->setKilled(true);
        }
        end.setPiece(sourcePiece);
    }
    this->currentTurn = !this->currentTurn;
    
}

bool Game::isOver(){
    if (this->status == StatusGame::ACTIVE){
        return false;
    }
    return true;
}