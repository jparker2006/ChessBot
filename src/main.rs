mod formatter;
mod piece;
mod piece_type;
mod square;
mod game;

#[allow(unused_imports)]
use crate::formatter::Formatter;
#[allow(unused_imports)]
use crate::piece::Piece;
#[allow(unused_imports)]
use crate::piece_type::PieceType;
#[allow(unused_imports)]
use crate::square::Square;
use crate::game::Game;

fn main() {
    let game = Game::new_empty();
    formatter::Formatter::print_game(&game);
}
