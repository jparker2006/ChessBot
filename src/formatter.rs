use crate::piece::Piece;
use crate::game::Game;

pub struct Formatter {
}

impl Formatter {
    pub fn print_game(sgame: &Game) {
        for r in 0..8 {
            for f in 0..8 {
                Piece::print_type(sgame.board[(r * 8) + f].get_piece_type());
                print!(" ");
            }
            println!("");
        }
    }
}
