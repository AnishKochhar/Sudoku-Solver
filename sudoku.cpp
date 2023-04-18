#include "helper.cpp"

int main() {

    Sudoku sudoku = sudoku_from_string(hardSudoku);
    print_sudoku(sudoku);

    return 0;
}
