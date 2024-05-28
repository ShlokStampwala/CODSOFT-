#include <iostream>
#include <vector>
#include <string>
using namespace std;

void printBoard(vector<vector<char>>& board) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j];
            if (j < 2) cout << " | ";
        }
        cout << endl;
        if (i < 2) cout << "---------" << endl;
    }
}
bool checkWinner(vector<vector<char>>& board, char player) {
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;
    return false;
}

bool isFull(vector<vector<char>>& board) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == ' ') return false;
        }
    }
    return true;
}

int main() {
    cout<<"\n\n\tWelcome To Tic Tac Toe Game"<<endl;
    cout<<"---------------------------------\n\n"<<endl;
    vector<vector<char>> board(3, vector<char>(3, ' '));
    char players[2] = { 'X', 'O' };
    int currentPlayer = 0;

    while (true) {
        printBoard(board);
        int row, col;
        cout << "Player " << players[currentPlayer] << ", Enter your move (row column): ";
        cin >> row >> col;

        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            cout << "Invalid move. Try again." << endl;
            continue;
        }

        board[row][col] = players[currentPlayer];

        if (checkWinner(board, players[currentPlayer])) {
            printBoard(board);
            cout << "Player " << players[currentPlayer] << " is Win the Game!" << endl;
            break;
        } else if (isFull(board)) {
            printBoard(board);
            cout << "It's a draw game!" << endl;
            break;
        }

        currentPlayer = (currentPlayer + 1) % 2;
    }

    char playAgain;
    cout << "Do you want to play Game again? (y/n): ";
    cin >> playAgain;
    if (playAgain == 'y' || playAgain == 'Y') {
        main(); 
    }

    return 0;
}