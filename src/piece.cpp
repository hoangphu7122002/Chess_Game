#include "piece.h"
#include "Enums.h"
#include <algorithm>

//King Move
//=============================================
bool King::canMove(Board board, Box start, Box end){
    if (end.getPiece()->isWhite() == this->isWhite()){
        return false;
    }
    int x = abs(start.getX() - end.getX());
    int y = abs(start.getY() - end.getY());
    
    if (x + y == 1 || x + y == 2){
        return true;
    }
    return false;
}

//=============================================

//Queen Move
//=============================================
bool Queen::canMove(Board board, Box start, Box end){
    if (end.getPiece()->isWhite() == this->isWhite()){
        return false;
    }
    int x = abs(start.getX() - end.getX());
    int y = abs(start.getY() - end.getY());
    if ((x == 0 || y == 0) || (x == y)){
        int maxX = max(start.getX(),end.getX());
        int minX = min(start.getX(),end.getX());
        int maxY = max(start.getY(),end.getY());
        int minY = min(start.getY(),end.getY());
        
        for (int x_i = minX; x_i <= maxX; ++x_i){
            for (int y_i = minY; y_i <= maxY; ++y_i){
                Box box = board.getBox(x_i,y_i);
                if (box.hasPiece()){
                    return false;
                }
            }
        }
        return true;
    }
    return false;
}

//=============================================

//Pawn Move
//=============================================
bool Pawn::canMove(Board board, Box start, Box end){
    if (end.getPiece()->isWhite() == this->isWhite()){
        return false;
    }
    int x = start.getX() - end.getX();
    int y = start.getY() - end.getY();
    if (y != -1){
        return false;
    }
    if (x == 0){
        if (end.getPiece()->getType() == PieceType::NONE){
            return true;
        }
        return false;
    }
    if (abs(x) == 1){
        return true;
    }
    return false;
}

//=============================================

//Knight Move
//=============================================
bool Knight::canMove(Board board, Box start, Box end){
    if (end.getPiece()->isWhite() == this->isWhite()){
        return false;
    }
    int x = abs(start.getX() - end.getX());
    int y = abs(start.getY() - end.getY());
    return x * y == 2;
}

//=============================================

//Bishop Move
//=============================================
bool Bishop::canMove(Board board, Box start, Box end){
    if (end.getPiece()->isWhite() == this->isWhite()){
        return false;
    }
    int x = abs(start.getX() - end.getX());
    int y = abs(start.getY() - end.getY());
    if (x == y){
        int maxX = max(start.getX(),end.getX());
        int minX = min(start.getX(),end.getX());
        int maxY = max(start.getY(),end.getY());
        int minY = min(start.getY(),end.getY());
        
        for (int x_i = minX; x_i <= maxX; ++x_i){
            for (int y_i = minY; y_i <= maxY; ++y_i){
                Box box = board.getBox(x_i,y_i);
                if (box.hasPiece()){
                    return false;
                }
            }
        }
        return true;
    }
    return false;
}

//=============================================

//Rook Move
//=============================================
bool Rook::canMove(Board board, Box start, Box end){
    if (end.getPiece()->isWhite() == this->isWhite()){
        return false;
    }
    int x = abs(start.getX() - end.getX());
    int y = abs(start.getY() - end.getY());
    if (x == 0 || y == 0){
        int maxX = max(start.getX(),end.getX());
        int minX = min(start.getX(),end.getX());
        int maxY = max(start.getY(),end.getY());
        int minY = min(start.getY(),end.getY());
        
        for (int x_i = minX; x_i <= maxX; ++x_i){
            for (int y_i = minY; y_i <= maxY; ++y_i){
                Box box = board.getBox(x_i,y_i);
                if (box.hasPiece()){
                    return false;
                }
            }
        }
        return true;
    }
    return false;
}

//=============================================
bool None::canMove(Board board, Box start, Box end){
    return false;
}