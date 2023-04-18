#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwchar>
#include <cwctype>

#include <iostream>
#include <vector>

#define N 9
#define D 3
#define div_length 15

#define filledSudoku "123456789912345678891234567789123456678912345567891234456789123345678912234567891"
#define easySudoku "000040050043058009500090010207000400050006000308007000000970080004005100709300000"
#define mediumSudoku "700081004010057690000000570000000007134008000000000903070102030683000000000005700"
#define hardSudoku "005700030000000518009000700051000020000020940427009001004600003060031000083040006"

class Cell {
    public:
        int row;
        int col;
        int val;
        // vector<int> candidates;
};

class Sudoku {
    public:
        Cell board[N][N];
};

Sudoku sudoku_from_string(std::string s);
void print_sudoku(Sudoku sudoku);

