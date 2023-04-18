sudoku: sudoku.cpp helper.cpp helper.h
	clang++ sudoku.cpp -o sudoku -Wall -Wextra -pedantic -std=c++17

# Clean
cleanObj:
	rm -f $(wildcard *.o)
clean:
	make cleanObj
	rm -f sudoku