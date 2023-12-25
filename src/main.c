#include "../include/main.h"

void print_board(cvector(int) board) {
    printf("-------------------\n");
    for (int file=0; file<8; file++) {
        printf("| ");
        for (int rank=0; rank<8; rank++) {
            printf("%c ", symbolize(board[file * 8 + rank]));
        }
        printf("|\n");
    }
    printf("-------------------\n");
}

int main() {
    cvector(int) Board = NULL;
    for (int file=0; file<8; file++) {
        for (int rank=0; rank<8; rank++) {
            cvector_push_back(Board, NONE);
        }
    }

    // Starting Position
    Board[0] = BLACK_ROOK; Board[1] = BLACK_KNIGHT; Board[2] = BLACK_BISHOP; Board[3] = BLACK_QUEEN;
    Board[4] = BLACK_KING; Board[5] = BLACK_BISHOP; Board[6] = BLACK_KNIGHT; Board[7] = BLACK_ROOK;
    for (int i=8; i<16; i++) { Board[i] = BLACK_PAWN; }
    for (int i=48; i<56; i++) { Board[i] = WHITE_PAWN; }
    Board[56] = WHITE_ROOK; Board[57] = WHITE_KNIGHT; Board[58] = WHITE_BISHOP; Board[59] = WHITE_QUEEN;
    Board[60] = WHITE_KING; Board[61] = WHITE_BISHOP; Board[62] = WHITE_KNIGHT; Board[63] = WHITE_ROOK;

    print_board(Board);

    cvector_free(Board);

    return 0;
}

/*

Vector Example

cvector(int) v = NULL;

// add some elements to the back
cvector_push_back(v, 10);
cvector_push_back(v, 20);
cvector_push_back(v, 30);
cvector_push_back(v, 40);
cvector_push_back(v, 50);
cvector_push_back(v, 60);
cvector_push_back(v, 70);
cvector_push_back(v, 80);

// remove an element by specifying an array subscript
cvector_erase(v, 2);

// remove an element from the back
cvector_pop_back(v);

// print out some stats about the vector
printf("pointer : %p\n", (void *)v);
printf("capacity: %zu\n", cvector_capacity(v));
printf("size    : %zu\n", cvector_size(v));

if (v) {
    size_t i;
    for (i = 0; i < cvector_size(v); ++i) {
        printf("v[%zu] = %d\n", i, v[i]);
    }
}

// well, we don't have destructors, so let's clean things up
cvector_free(v);

*/