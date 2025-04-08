#include "TicTacToe.h"
#include <cstdlib>
#include <iostream>
using namespace std;

char board[3][3]; //Possible values are X, O and _ (for blank positions)
char player = 'X';
int plays = 0;
char winner;

void init()
{
    // Initialize the board with blank spaces
    for(int j = 0; j < 3; j++)
    {
        for(int i = 0; i < 3; i++)
        {
            board[j][i] = '_';
        }
    }
    
    // Set initial values
    player = 'X';
    plays = 0;
    winner = '\0';
}

void clearScreen()
{
    cout << "Check\n";
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void showBoard()
{
    cout << "\n";
    cout << "   0   1   2  " << endl;  // Column numbers
    cout << " +---+---+---+" << endl;
    
    for(int i = 0; i < 3; i++)
    {
        cout << i << "| ";  // Row number
        for(int j = 0; j < 3; j++)
        {
            cout << board[i][j] << " | ";  // Cell content
        }
        cout << endl;
        cout << " +---+---+---+" << endl;  // Row separator
    }
    
    cout << "\nPlayer " << player << "'s turn." << endl;  // Show whose turn it is
}

