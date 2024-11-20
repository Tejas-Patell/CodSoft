#include <iostream>
using namespace std;

char board[3][3] = { {'1', '2', '3'},
                     {'4', '5', '6'},
                     {'7', '8', '9'} };

void displayBoard() {
    cout << "\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }
}

bool checkWin() {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return true;  // Row
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return true;  // Column
    }
    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return true;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return true;

    return false;
}

bool isDraw() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return false;  // Empty cell found
            }
        }
    }
    return true;  // No empty cells, it's a draw
}

void makeMove(char player) {
    int choice;
    cout << "Player " << player << ", enter the number of the cell: ";
    cin >> choice;

    // Map choice to board indices
    int row = (choice - 1) / 3;
    int col = (choice - 1) % 3;

    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = player;
    } else {
        cout << "Cell already taken Try again.\n";
        makeMove(player);
    }
}

int main() {
    char currentPlayer = 'X';

    while (true) {
        displayBoard();
        makeMove(currentPlayer);

        if (checkWin()) {
            displayBoard();
            cout << "Player " << currentPlayer << " wins! Congratulations!\n";
            break;
        }

        if (isDraw()) {
            displayBoard();
            cout << "It's a draw! Well played!\n";
            break;
        }

        // Switch player
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}
