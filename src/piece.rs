use crate::piece_type::PieceType;

pub struct Piece {
    pub piece_type: PieceType
}

impl Piece {
    #[allow(dead_code)]
    pub fn new(t: PieceType) -> Self {
        Piece {
            piece_type: t
        }
    }

    pub fn print_type(t: PieceType) {
        match t {
            PieceType::WhitePawn => print!("wP"),
            PieceType::WhiteKnight => print!("wN"),
            PieceType::WhiteBishop => print!("wB"),
            PieceType::WhiteRook => print!("wR"),
            PieceType::WhiteQueen => print!("wQ"),
            PieceType::WhiteKing => print!("wK"),
            PieceType::BlackPawn => print!("bP"),
            PieceType::BlackKnight => print!("bN"),
            PieceType::BlackBishop => print!("bB"),
            PieceType::BlackRook => print!("bR"),
            PieceType::BlackQueen => print!("bQ"),
            PieceType::BlackKing => print!("bK"),
            PieceType::NullPiece => print!("X")
        }
    }
}





