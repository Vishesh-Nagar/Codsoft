# Tic-Tac-Toe Game

## Overview
This is a simple console-based Tic-Tac-Toe game developed in C++. It allows two players to play against each other on a 3x3 grid. The game alternates turns between the players, and it checks for a winner or a draw after each move.

## Features
- **Game Board:** A 3x3 grid is displayed as the game board.
- **Players:** Two players can play the game, one as "X" and the other as "O".
- **Player Input:** The game prompts players to enter their moves.
- **Win/Draw Detection:** The game checks for a win or draw after each move.
- **Play Again Option:** Players are asked if they want to play another game after the current game ends.

## Compilation and Execution

### Prerequisites
- A C++ compiler like `g++`.
- A terminal or command prompt.

### Build Instructions
1. Open a terminal and navigate to the `TicTacToeProject` directory.
2. Compile the project using the following command:

   ```bash
   g++ -o build/TicTacToe src/main.cpp src/TicTacToe.cpp -Iinclude

./build/TicTacToe

How to Play
1. The game starts with Player X.
2. Players are prompted to enter the row and column number (0, 1, or 2) for their move.
3. The game checks for a winner or draw after each move.
4. The game ends when there is a winner or when all cells are filled, resulting in a draw.
5. After the game ends, you can choose to play again.

### License
This project is open-source and available under the MIT License.

Author
Vishesh Nagar