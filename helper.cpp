#include "helper.h"

void print_sudoku(Sudoku sudoku) {
    for (int j=0; j<div_length; j++) {
        printf(" -");
    }
    puts("");
    for (int i=1; i<=N; i++) {
        printf("|");
        for (int j=1; j<=N; j++) {
            printf("%2d ", sudoku.board[i - 1][j - 1].val);
            if (j % D == 0) printf("|");
        }
        puts("");
        if (i % D == 0) {
            for (int j=0; j<div_length; j++) {
                printf(" -");
            }
            puts("");
        }
    }
}

Sudoku sudoku_from_string(std::string s) {
    assert(s.length() == N * N); // fatal error if string is not of the right length
    Sudoku sudoku;
    for (int row=0; row<N; row++) {
        for (int col=0; col<N; col++) {
            Cell new_cell;
            new_cell.row = row + 1;
            new_cell.col = col + 1;
            new_cell.val = s[row * N + col] - '0';
            sudoku.board[row][col] = new_cell;
        }
    }
    return sudoku;
}