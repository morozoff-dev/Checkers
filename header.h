
#include <iostream>

using namespace std;

extern char board[8][8];


extern char turn;
extern bool leap;
extern bool game_running;
extern int row1, row2, column1, column2;

void display_board();   // displays the checkers board
void input(); 			// takes user input
bool check_move();		// checks if a move is legal
void move();   			// Performs a move
void do_leap();			// Performs a leap over a checkers pieces
void king();			// Converts regular checkers pieces that have reached the other side of the board to king pieces
void game_over();		// Determins if the game is over