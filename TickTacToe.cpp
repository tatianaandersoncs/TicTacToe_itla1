#include "TicTacToe.h"
#include <cstdlib>
#include <iostream>
using namespace std;

char board[3][3]; //Possible values are X, O and _ (for blank positions)
char player = 'X';
int plays = 0;
char winner;

void welcomeMessage()
{
    cout << "============================\n";
    cout << " Welcome to Tic-Tac-Toe!\n";
    cout << "============================\n";
}

void init() //initialized
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

void resetBoard()
{
    cout << "resetBoard() called!" << endl;

    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            board[i][j] = '_';
        }
    }
    plays = 0;
    player = 'X';
    winner = '\0';
}

int main()
{
    welcomeMessage();  // Call the new welcome message
    init();
    showBoard();
    // Add your game loop or logic here
    return 0;
}
