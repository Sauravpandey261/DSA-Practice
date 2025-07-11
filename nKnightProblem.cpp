#include <iostream>
#include <vector>
using namespace std;

void printBoard(vector<vector<char>> board)
{
    int n = board.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << "---------------------------\n";
}

bool isSafe(vector<vector<char>> board, int i, int j)
{
    int n = board.size();
    // top left
    if (i - 2 >= 0 && j - 1 >= 0 && board[i - 2][j - 1] == 'N')
    {
        return false;
    }

    // top right
    if (i - 2 >= 0 && j + 1 >= 0 && board[i - 2][j + 1] == 'N')
    {
        return false;
    }

    // side left
    if (i - 1 >= 0 && j - 2 >= 0 && board[i - 1][j - 2] == 'N')
    {
        return false;
    }

    // side right
    if (i - 1 >= 0 && j + 2 >= 0 && board[i - 1][j + 2] == 'N')
    {
        return false;
    }
    return true;
}
void nKnight(vector<vector<char>> board, int row, int col)
{
    int n = board.size();
    if (row == n)
    {
        printBoard(board);
        return;
    }
   if(col==n)
    {
        nKnight(board,row+1,0);
        return;
    } 
    if (isSafe(board, row, col))
            {
                board[row][col] = 'N';
                nKnight(board, row, col + 1);
                board[row][col] = '.';
            }
        }

int main()
{
    vector<vector<char>> board;
    int n = 3;
    for (int i = 0; i < n; i++)
    {
        vector<char> newRow;
        for (int j = 0; j < n; j++)
        {
            newRow.push_back('.');
        }
        board.push_back(newRow);
    }
    nKnight(board, 0, 0);
    return 0;
}