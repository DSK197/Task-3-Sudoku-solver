# Sudoku Solver using C++

## Project Overview

This project is a Sudoku Solver developed using C++. It solves a 9×9 Sudoku puzzle by filling empty cells while following the rules of Sudoku.

The program uses the backtracking algorithm to find a valid solution.

## Features

- Solves a 9×9 Sudoku puzzle.
- Checks row, column, and 3×3 box constraints.
- Uses backtracking to find the solution.
- Displays the original and solved Sudoku grids.
- Reports when no solution exists.

## Technologies Used

- C++
- Standard Input/Output
- Backtracking Algorithm

## How It Works

1. The program initializes a Sudoku grid, where `0` represents an empty cell.
2. It finds an empty cell in the grid.
3. It checks whether a number from 1 to 9 can be placed in that cell.
4. If a number is valid, it places the number and continues solving.
5. If a solution cannot be found, it backtracks and tries another number.
6. The program displays the solved Sudoku grid if a solution exists.

## How to Run

### Step 1: Compile the program

```bash
g++ main.cpp -o sudoku
```

### Step 2: Run the program

**Windows:**

```powershell
.\sudoku.exe
```

**Linux/macOS:**

```bash
./sudoku
```

## Sample Output

```text
Original Sudoku:
[Displays the initial Sudoku grid]

Solved Sudoku:
5 3 4 | 6 7 8 | 9 1 2
6 7 2 | 1 9 5 | 3 4 8
1 9 8 | 3 4 2 | 5 6 7
---------------------
8 5 9 | 7 6 1 | 4 2 3
4 2 6 | 8 5 3 | 7 9 1
7 1 3 | 9 2 4 | 8 5 6
---------------------
9 6 1 | 5 3 7 | 2 8 4
2 8 7 | 4 1 9 | 6 3 5
3 4 5 | 2 8 6 | 1 7 9
```

## Concepts Learned

- Functions
- Two-dimensional arrays
- Conditional statements and loops
- Recursion
- Backtracking algorithm

## Project Structure

```text
CodeAlpha_SudokuSolver/
├── main.cpp
└── README.md
```

## Internship

This project was developed as part of the CodeAlpha C++ Programming Internship.

## Author
A. Jogeswara Durga Sai Kumar
C++ Programming Intern
