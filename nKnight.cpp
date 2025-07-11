#include <iostream>
#include <vector>
using namespace std;

int solutionCount = 0;

void printBoard(const vector<vector<char>> &board) {
    for (auto row : board) {
        for (char cell : row)
            cout << cell << " ";
        cout << endl;
    }
    cout << "---------------------------\n";
}

bool isSafe(const vector<vector<char>> &board, int i, int j) {
    int n = board.size();
    
    // Check top-left knight attack
    if (i - 2 >= 0 && j - 1 >= 0 && board[i - 2][j - 1] == 'N') return false;
    if (i - 2 >= 0 && j + 1 < n  && board[i - 2][j + 1] == 'N') return false;
    if (i - 1 >= 0 && j - 2 >= 0 && board[i - 1][j - 2] == 'N') return false;
    if (i - 1 >= 0 && j + 2 < n  && board[i - 1][j + 2] == 'N') return false;

    return true;
}

void nKnightRowWise(vector<vector<char>> &board, int row, int n) {
    if (row == n) {
        printBoard(board);
        solutionCount++;
        return;
    }

    for (int col = 0; col < n; col++) {
        if (isSafe(board, row, col)) {
            board[row][col] = 'N';
            nKnightRowWise(board, row + 1, n);
            board[row][col] = '.';
        }
    }
}

int main() {
    int n = 4;
    vector<vector<char>> board(n, vector<char>(n, '.'));

    nKnightRowWise(board, 0, n);

    cout << "Total Row-wise Solutions: " << solutionCount << endl;
    return 0;
}
