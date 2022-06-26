class Solution {
public:
    int n;
    int m;
    int dfs(vector<vector<int>>& grid, int i, int j){
        if(i==-1 || j == -1 || i==n || j == m) {
            return 0;
        }
        if(grid[i][j]==1){
            grid[i][j] = 0;
            return 1 + dfs(grid, i+1, j)+ dfs(grid, i, j+1)+ dfs(grid, i-1, j)+ dfs(grid, i, j-1);
        }
        return 0;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans = 0;
        n = grid.size();
        m = grid[0].size();
        
        for (int i = 0; i<n; i++){
            for(int j=0; j<m; j++)
            {
                int mx = dfs(grid, i, j);
                ans = max(mx,ans);
            }
        }
        
        return ans;
    }
};