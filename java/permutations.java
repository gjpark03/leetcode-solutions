/*
Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.
*/

class Solution {
    public List<List<Integer>> permute(int[] nums) {
       List<List<Integer>> sol = new ArrayList<>();
       backtrack(sol, new ArrayList<>(), nums);
       return sol;
    }

    public void backtrack(List<List<Integer>> sol, List<Integer> temp, int[] nums) {
        if(temp.size() == nums.length) {
            sol.add(new ArrayList<>(temp));
        } else {
            for(int i = 0; i < nums.length; i++) {
                if (temp.contains(nums[i])) continue; 
                temp.add(nums[i]);
                backtrack(sol, temp, nums);
                temp.remove(temp.size() - 1);
            }
        }
    }
}
