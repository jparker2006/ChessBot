#include "piece.h"

bool isWhite(int nPiece) {
    return (nPiece & COLOR_MASK) == WHITE && nPiece != 0;
}

int pieceType(int nPiece) {
    return nPiece & TYPE_MASK;
}

char symbolize(int nPiece) {
    int nPieceType = pieceType(nPiece);
    char cPiece;
    switch(nPieceType) {
        case ROOK: 
            cPiece = 'R';
            break;
        case KNIGHT:
            cPiece = 'N';
            break;
        case BISHOP:
            cPiece = 'B';
            break;
        case QUEEN: 
            cPiece = 'Q';
            break;
        case KING:
            cPiece = 'K';
            break;
        case PAWN:
            cPiece = 'P';
            break;
        default:
            cPiece = ' ';
    };
    if (!isWhite(nPiece))
        cPiece = tolower(cPiece);
    return cPiece;
}