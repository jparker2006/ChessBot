use crate::piece_type::PieceType;

pub struct Square {
    pub piece_type: PieceType,
    pub file: u8,
    pub rank: u8,
    pub index: u8
}

impl Square {
    pub fn new(t: PieceType, i: u8) -> Self {
        Square {
            piece_type: t,
            file: i / 8 as u8,
            rank: i % 8,
            index: i
        }
    }

    pub fn get_piece_type(&self) -> PieceType {
        return self.piece_type
    }
}
