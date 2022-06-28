class Solution {
public:
    
    
    
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        

        queue<pair<int,int>> q;
        for(int i=0; i<rows; i++)
        {
            for (int j=0;j<cols;j++)
            {
                if(mat[i][j]==0)
                {
                    q.push({i,j});
                }
                else mat[i][j] = -1;
            }
        }
        
        int dir[5] = {0,1,0,-1,0};
        while(!q.empty()){
            pair<int, int> curr = q.front();
            int r = curr.first;
            int c = curr.second;
            q.pop();

            for(int i=0; i<4; i++)
            {
                int nr = r + dir[i];
                int nc = c + dir[i+1];
                if (nr < 0 || nr == rows || nc < 0 || nc == cols || mat[nr][nc] != -1) 
                {
                    continue;
                }
                mat[nr][nc] = mat[r][c]+1;
                q.push({nr,nc});
            }
        }
        return mat;
            
    }
};