class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter = 0;
        int rows = grid.size();
        if(rows == 0) return 0;
        int cols = grid[0].size();
        
        // Directions: up, down, left, right
        vector<pair<int, int>> directions = { {-1,0}, {1,0}, {0,-1}, {0,1} };
        
        for(int i = 0; i < rows; ++i){
            for(int j = 0; j < cols; ++j){
                if(grid[i][j] == 1){
                    // Start with 4 sides
                    perimeter += 4;
                    
                    // Check all four neighbors
                    for(auto &dir : directions){
                        int ni = i + dir.first;
                        int nj = j + dir.second;
                        // If neighbor is land, subtract 1 from perimeter
                        if(ni >=0 && ni < rows && nj >=0 && nj < cols && grid[ni][nj] == 1){
                            perimeter -=1;
                        }
                    }
                }
            }
        }
        return perimeter; 
    }
};
