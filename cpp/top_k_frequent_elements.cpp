// Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //    k = element  v = frequency
        // unordered_map<int, int> freqMap;
        // for(int num : nums) {
        //     freqMap[num]++;
        // }
        // vector<int> sol;
        // int max = -1;
        // int index = 0;
        // while(k > 0) {
        //     for(auto it = freqMap.begin(); it != freqMap.end(); ++it) {
        //         if(freqMap[it->first] > max) {
        //             max = freqMap[it->first];
        //             index = it->first;
        //         }
        //     }
        //     sol.push_back(index);
        //     freqMap.erase(index);
        //     max = -1;
        //     k--;
        // }
        // return sol;

        // count the frequency of each element
        unordered_map<int, int> freqMap;
        for (int num : nums) {
            freqMap[num]++;
        }

        // use a heap to keep track of the top k elements
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;

        for (auto& [num, freq] : freqMap) {
            minHeap.push({freq, num});
            if(minHeap.size() > k) {
                minHeap.pop();
            }
        }

        // extract the top k elements from the heap
        vector<int> sol;
        while(!minHeap.empty()) {
            sol.push_back(minHeap.top().second);
            minHeap.pop();
        }

        return sol;
    }
};
