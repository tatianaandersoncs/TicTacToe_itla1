#include "TicTacToe.h"
#include <cstdlib>
#include <iostream>
using namespace std;

char board[3][3]; //Possible values are X, O and _ (for blank positions)
char player = 'X';
int plays = 0;
char winner;


bool validation(int input){
    if (input < 1 || input > 9){
        cout << "Invalid value: Please enter int between 1-9" << endl;
        return false;
    }

    int row = (input - 1) / 3;
    int col = (input - 1) % 3;

    if (board[row][col] != '_') {
        cout << "Spot already taken. Try again.";
        return false;
    }
    return true;
}


void init()
{
    // Initialize the board with blank spaces
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            board[i][j] = '_';
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

