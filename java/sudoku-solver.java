/*
Write a program to solve a Sudoku puzzle by filling the empty cells.
*/
class Solution {
    public void solveSudoku(char[][] board) {
        sudokuHelper(board);
    }

    private boolean sudokuHelper(char[][] board) {
        for(int row = 0; row < 9; row++) {
            for(int col = 0; col < 9; col++) {
                if(board[row][col] == '.') {
                    for(char num = '1'; num <= '9'; num++) {
                        if(isValid(board, row, col, num)) {
                            board[row][col] = num; 
                            if(sudokuHelper(board)) {
                                return true;
                            }
                            // backtrack
                            board[row][col] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

    private boolean isValid(char[][] board, int row, int col, char num) {        
        // check row
        for(int i = 0; i < 9; i++) {
            if(board[row][i] == num) {
                return false;
            }
        }
        // check column
        for (int i = 0; i < 9; i++) {
            if (board[i][col] == num) {
                return false;
            }
        }
        // check 3x3
        int boxRowStart = (row / 3) * 3;
        int boxColStart = (col / 3) * 3;
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                if(board[boxRowStart + i][boxColStart + j] == num) {
                    return false;
                }
            }
        }      
        return true;
    }
}
