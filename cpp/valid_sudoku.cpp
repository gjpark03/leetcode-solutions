/*
  Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:
  
  Each row must contain the digits 1-9 without repetition.
  Each column must contain the digits 1-9 without repetition.
  Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.
*/

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Brute force approach, loop through each row/column checking if there
        // are any duplicates.
        unordered_set<char> digits;
        bool is_valid = true;
        // validate rows
        for(int i = 0; i < 9; i++) {
            vector<char> row = board[i];
            for(int j = 0; j < 9; j++) {
                if(row[j] != '.') {
                    if(digits.find(row[j]) != digits.end()) {
                        is_valid = false;
                    } else {
                        digits.insert(row[j]);
                    }
                }
            }
            digits.clear();
        }
        // validate columns
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                vector<char> row = board[j];
                if(row[i] != '.') {
                    if(digits.find(row[i]) != digits.end()) {
                        is_valid = false;
                    } else {
                        digits.insert(row[i]);
                    }
                }
            }
            digits.clear();
        }

        // validate 3x3
        for(int boxRow = 0; boxRow < 3; boxRow++) {
            for(int boxCol = 0; boxCol < 3; boxCol++) {
                digits.clear();
                for(int i = boxRow * 3; i < boxRow * 3 + 3; i++) {
                    for(int j = boxCol * 3; j < boxCol * 3 + 3; j++) {
                        char current = board[i][j];
                        if(current != '.') {
                            if(digits.find(current) != digits.end()) {
                                is_valid = false;
                            }
                            digits.insert(current);
                        }
                    }
                }
            }
        }
        return is_valid;
    }
};
