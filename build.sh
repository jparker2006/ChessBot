gcc -Iinclude -c src/main.c -o bin/main.o
gcc -Iinclude -c src/piece.c -o bin/piece.o
gcc -Iinclude -c src/fenparser.c -o bin/fenparser.o

gcc bin/main.o bin/piece.o bin/fenparser.o -o ChessBot.o
./ChessBot.o