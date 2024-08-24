#ifndef TICTACTOE_H
#define TICTACTOE_H

class TicTacToe {
  public:
    TicTacToe();
    void playGame();

  private:
    char board[3][3];
    char currentPlayer;
    char winner;
    bool gameEnded;

    void printBoard();
    void playerMove();
    void switchPlayer();
    void checkWin();
    void checkDraw();
};

#endif