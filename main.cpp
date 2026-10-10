
#include <iostream>
using namespace std;

const int SIZE = 9;

// Check whether a number can be placed
bool isSafe(int grid[SIZE][SIZE], int row, int col, int num)
{
    for (int i = 0; i < SIZE; i++)
    {
        if (grid[row][i] == num)
        {
            return false;
        }

        if (grid[i][col] == num)
        {
            return false;
        }
    }

    int startRow = row - row % 3;
    int startCol = col - col % 3;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (grid[startRow + i][startCol + j] == num)
            {
                return false;
            }
        }
    }

    return true;
}

// Solve Sudoku using backtracking
bool solveSudoku(int grid[SIZE][SIZE])
{
    for (int row = 0; row < SIZE; row++)
    {
        for (int col = 0; col < SIZE; col++)
        {
            if (grid[row][col] == 0)
            {
                for (int num = 1; num <= 9; num++)
                {
                    if (isSafe(grid, row, col, num))
                    {
                        grid[row][col] = num;

                        if (solveSudoku(grid))
                        {
                            return true;
                        }

                        grid[row][col] = 0;
                    }
                }

                return false;
            }
        }
    }

    return true;
}

// Display the Sudoku grid
void printGrid(int grid[SIZE][SIZE])
{
    for (int row = 0; row < SIZE; row++)
    {
        if (row % 3 == 0 && row != 0)
            cout << "---------------------\n";

        for (int col = 0; col < SIZE; col++)
        {
            if (col % 3 == 0 && col != 0)
                cout << "| ";

            cout << grid[row][col] << " ";
        }

        cout << '\n';
    }
}

int main()
{
    int grid[SIZE][SIZE] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    cout << "Original Sudoku:\n";
    printGrid(grid);

    if (solveSudoku(grid))
    {
        cout << "\nSolved Sudoku:\n";
        printGrid(grid);
    }
    else
    {
        cout << "\nNo solution exists for this puzzle.\n";
    }

    return 0;
}
