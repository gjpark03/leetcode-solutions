class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses, vector<int>());
        vector<int> in_degree(numCourses, 0);
        for(auto &pre : prerequisites){
            int ai = pre[0];
            int bi = pre[1];
            adj[bi].push_back(ai);
            in_degree[ai]++;
        }
        
        queue<int> q;
        for(int i = 0; i < numCourses; ++i){
            if(in_degree[i] == 0){
                q.push(i);
            }
        }

        int count = 0;

        while(!q.empty()) {
            int current = q.front();
            q.pop();
            count++;
            
            // Decrease in-degree of neighboring nodes
            for(auto &neighbor : adj[current]){
                in_degree[neighbor]--;
                if(in_degree[neighbor] == 0){
                    q.push(neighbor);
                }
            }
        }
        return count == numCourses;
    }
};
