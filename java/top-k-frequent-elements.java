/*
Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.
*/

class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        HashMap<Integer, Integer> frequencyMap = new HashMap<>();
        for(int num : nums) {
            frequencyMap.put(num, frequencyMap.getOrDefault(num, 0) + 1);
        }

        PriorityQueue<Map.Entry<Integer, Integer>> minHeap = 
            new PriorityQueue<>(Comparator.comparingInt(Map.Entry::getValue));

        for(Map.Entry<Integer, Integer> entry : frequencyMap.entrySet()) {
            minHeap.add(entry);
            if(minHeap.size() > k) {
                minHeap.poll(); 
            }
        }
        int[] sol = new int[k];
        int index = 0;
        while (!minHeap.isEmpty()) {
            sol[index++] = minHeap.poll().getKey();
        }
        return sol;
    }
}
