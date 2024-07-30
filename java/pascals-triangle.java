/*
Given an integer numRows, return the first numRows of Pascal's triangle.
In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:
*/

class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> sol = new ArrayList<>();
        List<Integer> firstRow = new ArrayList<>();
        firstRow.add(1);
        sol.add(firstRow);
        for(int i = 1; i < numRows; i++) {
            List<Integer> prevRow = sol.get(i - 1);
            List<Integer> newRow = new ArrayList<>();
            newRow.add(1);

            for(int j = 1; j < i; j++) {
                newRow.add(prevRow.get(j - 1) + prevRow.get(j));
            }
            newRow.add(1);
            sol.add(newRow);
        }
        return sol;
    }
}
