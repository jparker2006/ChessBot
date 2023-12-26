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

int numberize(char cPiece) {
    bool bWhite = isupper(cPiece) > 0 ? true : false;
    char cPieceLower = tolower(cPiece);
    int nPiece = 0;
    switch(cPieceLower) {
        case 'p': 
            nPiece = PAWN;
            break;
        case 'n': 
            nPiece = KNIGHT;
            break;
        case 'b': 
            nPiece = BISHOP;
            break;
        case 'r': 
            nPiece = ROOK;
            break;
        case 'q': 
            nPiece = QUEEN;
            break;
        case 'k': 
            nPiece = KING;
            break;
    }
    int nColor = bWhite ? 0 : 8;
    return nPiece | nColor;
}