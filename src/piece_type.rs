/*
Piece's have a 4-bit structure for type:
First bit shows color
- White:  0
- Black:  1
Last 3 bits are used to show which piece
- Pawn:   000
- Knight: 001
- Bishop: 010
- Rook:   011
- Queen:  100
- King:   101
Thus:
- wPawn    = 0000,  0
- wKnight  = 0001,  1
- wBishop  = 0010,  2
- wRook    = 0011,  3
- wQueen   = 0100,  4
- wKing    = 0101,  5
- bPawn    = 1000,  8
- bKnight  = 1001,  9
- bBishop  = 1010, 10
- bRook    = 1011, 11
- bQueen   = 1100, 12
- bKing    = 1101, 13
*/

#[derive(Copy, Clone)]
pub enum PieceType {
    WhitePawn   = 0b0000,
    WhiteKnight = 0b0001,
    WhiteBishop = 0b0010,
    WhiteRook   = 0b0011,
    WhiteQueen  = 0b0100,
    WhiteKing   = 0b0101,
    BlackPawn   = 0b1000,
    BlackKnight = 0b1001,
    BlackBishop = 0b1010,
    BlackRook   = 0b1011,
    BlackQueen  = 0b1100,
    BlackKing   = 0b1101,
    NullPiece   = 0b1111
}
