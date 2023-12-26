#ifndef PIECE_H
#define PIECE_H

#include <stdbool.h>
#include <ctype.h>

// struct Piece

// Piece Types
#define NONE 0
#define PAWN 1
#define KNIGHT 2
#define BISHOP 3
#define ROOK 4
#define QUEEN 5
#define KING 6

// Piece Colors
#define WHITE 0
#define BLACK 8

// Pieces
#define WHITE_PAWN PAWN | WHITE // 1
#define WHITE_KNIGHT KNIGHT | WHITE // 2
#define WHITE_BISHOP BISHOP | WHITE // 3
#define WHITE_ROOK ROOK | WHITE // 4
#define WHITE_QUEEN QUEEN | WHITE // 5
#define WHITE_KING KING | WHITE // 6

#define BLACK_PAWN PAWN | BLACK // 9
#define BLACK_KNIGHT KNIGHT | BLACK // 10
#define BLACK_BISHOP BISHOP | BLACK // 11
#define BLACK_ROOK ROOK | BLACK // 12
#define BLACK_QUEEN QUEEN | BLACK // 13
#define BLACK_KING KING | BLACK // 14

// Masks
#define TYPE_MASK 0b0111
#define COLOR_MASK 0b1000

bool isWhite(int nPiece);
int pieceType(int nPiece);

char symbolize(int nPiece);
int numberize(char cPiece);

#endif // PIECE_H