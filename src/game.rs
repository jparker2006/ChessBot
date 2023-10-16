use crate::square::Square;
use crate::piece_type::PieceType;

pub struct Game {
    pub board: Vec<Square>
}

impl Game {
    pub fn new_empty() -> Self {
        let mut b = vec![];
        for i in 0..64 as usize {
            b.push(Square::new(PieceType::NullPiece, i as u8));
        }
        Game { board: b }
    }
}
