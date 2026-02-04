#include <iostream>
using namespace std;

#define N 4  // You can change this value to solve for any N

int board[N][N];

// Function to print the chessboard
void printSolution() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << (board[i][j] ? "Q " : ". ");
        cout << endl;
    }
    cout << endl;
}

// Check if placing a queen at board[row][col] is safe
bool isSafe(int row, int col) {
    int i, j;

    // Check column (above rows)
    for (i = 0; i < row; i++)
        if (board[i][col])
            return false;

    // Check upper-left diagonal
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;

    // Check upper-right diagonal
    for (i = row, j = col; i >= 0 && j < N; i--, j++)
        if (board[i][j])
            return false;

    return true;
}

// Solve N-Queens using backtracking
bool solveNQ(int row) {
    // Base case: all queens placed
    if (row >= N) {
        printSolution();
        return true;
    }

    bool res = false;
    for (int col = 0; col < N; col++) {
        if (isSafe(row, col)) {
            board[row][col] = 1;        // Place queen
            res = solveNQ(row + 1) || res;
            board[row][col] = 0;        // Backtrack
        }
    }
    return res;
}

int main() {
    // Initialize board to 0
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            board[i][j] = 0;

    if (!solveNQ(0))
        cout << "No solution exists for " << N << " queens." << endl;
    else
        cout << "Solutions printed above." << endl;

    return 0;
}
