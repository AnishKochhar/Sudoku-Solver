sudoku: main.cpp 
	clang++ main.cpp -o sudoku -Wall -Wextra -pedantic -std=c++17

# Clean
cleanObj:
	rm -f $(wildcard *.o)
clean:
	make cleanObj
	rm -f sudoku