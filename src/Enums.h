#ifndef ENUMS_H
#define ENUMS_H

enum class PieceType {
    KING,
    QUEEN,
    KNIGHT,
    BISHOP,
    PAWN,
    ROOK,
    NONE
};

enum class GameType {
    WIN,
    DRAW,
    CLOSE,
    NONE
};

enum class StatusGame {
    ACTIVE,
    WHITE_WIN,
    BLACK_WIN,
    DRAW,
    RESIGNED
};

#endif