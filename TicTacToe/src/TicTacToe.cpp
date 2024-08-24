#include "TicTacToe.h"
#include <iostream>

TicTacToe::TicTacToe() : currentPlayer('X'), gameEnded(false) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            board[i][j] = ' ';
        }
    }
}

void TicTacToe::playGame() {
    do {
        printBoard();
        playerMove();
        checkWin();
        checkDraw();
        switchPlayer();
    } while (!gameEnded);

    printBoard();
    if (winner == 'X' || winner == 'O') {
        std::cout << "Player " << winner << " wins!" << std::endl;
    } else {
        std::cout << "The game is a draw!" << std::endl;
    }
}

void TicTacToe::printBoard() {
    std::cout << "  0 1 2\n";
    for (int i = 0; i < 3; ++i) {
        std::cout << i << " ";
        for (int j = 0; j < 3; ++j) {
            std::cout << board[i][j];
            if (j < 2)
                std::cout << "|";
        }
        std::cout << "\n";
        if (i < 2)
            std::cout << "  -----\n";
    }
}

void TicTacToe::playerMove() {
    int x, y;
    std::cout << "Player " << currentPlayer
              << ", enter your move (row and column): ";
    std::cin >> x >> y;

    while (x < 0 || x > 2 || y < 0 || y > 2 || board[x][y] != ' ') {
        std::cout << "Invalid move. Try again: ";
        std::cin >> x >> y;
    }

    board[x][y] = currentPlayer;
}

void TicTacToe::switchPlayer() {
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

void TicTacToe::checkWin() {
    for (int i = 0; i < 3; ++i) {
        // Check rows
        if (board[i][0] == currentPlayer && board[i][1] == currentPlayer &&
            board[i][2] == currentPlayer) {
            winner = currentPlayer;
            gameEnded = true;
        }
        // Check columns
        if (board[0][i] == currentPlayer && board[1][i] == currentPlayer &&
            board[2][i] == currentPlayer) {
            winner = currentPlayer;
            gameEnded = true;
        }
    }

    // Check diagonals
    if (board[0][0] == currentPlayer && board[1][1] == currentPlayer &&
        board[2][2] == currentPlayer) {
        winner = currentPlayer;
        gameEnded = true;
    }
    if (board[0][2] == currentPlayer && board[1][1] == currentPlayer &&
        board[2][0] == currentPlayer) {
        winner = currentPlayer;
        gameEnded = true;
    }
}

void TicTacToe::checkDraw() {
    bool draw = true;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == ' ') {
                draw = false;
            }
        }
    }

    if (draw && !gameEnded) {
        gameEnded = true;
        winner = 'D'; // Draw
    }
}
