#include "board.h"
#include <iostream>
#include <vector>
#include "Enums.h"

using namespace std;

void Board::initializeBoard(){
    //white piece
    this->board.resize(8);
    for (int i = 0; i < 8; ++i){
        this->board[i].resize(8);
    }
    
    vector <Piece*> white_chess_piece = {new Rook(true),new Knight(true),new Bishop(true),new Queen(true),new King(true),new Bishop(true),new Knight(true),new Rook(true),new Pawn(true),new Pawn(true),new Pawn(true),new Pawn(true),new Pawn(true),new Pawn(true),new Pawn(true),new Pawn(true)};
    
    vector <Piece*> black_chess_piece = {new Pawn(false),new Pawn(false),new Pawn(false),new Pawn(false),new Pawn(false),new Pawn(false),new Pawn(false),new Pawn(false),new Rook(false),new Knight(false),new Bishop(false),new Queen(false),new King(false),new Bishop(false),new Knight(false),new Rook(false)};
    
    int white_index = 0;
    int black_index = 0;
    
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j){
            if (i * 8 + j < 16){
                this->board[i][j] = Box(i,j,white_chess_piece[white_index]);
                white_index++;
            }
            else if (i * 8 + j >= 48){
                this->board[i][j] = Box(i,j,black_chess_piece[black_index]);
                black_index++;
            }
            else {
                this->board[i][j] = Box(i,j,new None());
            }
        }
    }
    
    
}

Box Board::getBox(int x,int y){
    if (x < 0 || x > 7){
        throw "index out of bound!!!";
    }
    if (y < 0 || y > 7){
        throw "index out of bound!!!";
    }
    return this->board[x][y];
}

Board::Board(){
    this->initializeBoard();
}

Board::~Board(){

}