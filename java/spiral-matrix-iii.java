/*
You start at the cell (rStart, cStart) of an rows x cols grid facing east. The northwest corner is at the first 
row and column in the grid, and the southeast corner is at the last row and column.
You will walk in a clockwise spiral shape to visit every position in this grid. Whenever you move outside the grid's boundary, 
we continue our walk outside the grid (but may return to the grid boundary later.). Eventually, we reach all rows * cols spaces of the grid.
Return an array of coordinates representing the positions of the grid in the order you visited them.
*/

class Solution {
    public int[][] spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        int[][] sol = new int[rows * cols][2]; // intialize 2D array
        int index = 0;

        int[][] directions = {{0,1}, {1,0}, {0, -1}, {-1,0}};
        int directionIndex = 0;

        int steps = 1;
        sol[index++] = new int[]{rStart, cStart};

        while(index < rows * cols) {
            for(int i = 0; i < 2; i++) {
                for(int j = 0; j < steps; j++) {
                    rStart += directions[directionIndex][0];
                    cStart += directions[directionIndex][1];
                    if(rStart >= 0 && rStart < rows && cStart >= 0 && cStart < cols) {
                        sol[index++] = new int[]{rStart, cStart};
                    }
                }
                directionIndex = (directionIndex + 1) % 4;
            }
            steps++;
        }
        return sol;
    }
}
