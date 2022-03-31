#include <iostream>
#include "header.h"


using namespace std;

char board[8][8] =
{
    {' ', 'b', ' ', 'b', ' ', 'b', ' ', 'b'},
    {'b', ' ', 'b', ' ', 'b', ' ', 'b', ' '},
    {' ', 'b', ' ', 'b', ' ', 'b', ' ', 'b'},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'r', ' ', 'r', ' ', 'r', ' ', 'r', ' '},
    {' ', 'r', ' ', 'r', ' ', 'r', ' ', 'r'},
    {'r', ' ', 'r', ' ', 'r', ' ', 'r', ' '},
};

char turn = 'B';
bool leap;
bool game_running = true;
int row1, row2, column1, column2;


int main()
{
    cout << "---CHECKERS GAME---\n";
    cout << "Player 1 [b]\n";
    cout << "Player 2 [r]\n\n";
    cout << "A capital letter represents a king piece.\n";
    cout << "Please resize your command-line window so that this line fits on the screen:\n";
    cout << "_____________________________________________________________________________________\n\n";
    cout << "Press enter to begin...";
    cin.get(); // Waits for the user to press enter before continuing
	
	// The game loop
    while (game_running)
    {
        display_board();
        
        if (turn == 'B')
        {
            cout << "--Player 1 [B]--\n";
        }
        else if (turn == 'R')
        {
            cout << "--Player 2 [R]--\n";
        }
        
        input();
        move();
        king();
        game_over();
    }
    
	// Display the winner at the end
    if (turn == 'B')
    {
        cout << endl << endl << "Player 2 [Red] wins!\n";
    }
    else if (turn == 'R')
    {
        cout << endl << endl << "Player 1 [Black] wins!\n";
    }
    
    cout << "GAME OVER!\n";
}


