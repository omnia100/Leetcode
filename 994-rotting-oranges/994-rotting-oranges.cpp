class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int minute = 0;
        int dir[5] = {0,1,0,-1,0};
        queue<pair<int,int>> q;
        queue<pair<int,int>> qtmp;
        int n=grid.size();
        int m=grid[0].size();
        
        for(int i = 0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2){
                    qtmp.push({i,j});
                }
            }
        }
        
        
        while(!qtmp.empty()){
            q = qtmp;
            qtmp = queue<pair<int,int>>();
            bool f=false;
            while(!q.empty())
            {
                pair<int,int> curr=q.front();
                q.pop();
                int r=curr.first;
                int c=curr.second;
                for(int i=0;i<4;i++)
                {
                    int nr=r+dir[i];
                    int nc=c+dir[i+1];
                    if(nr<0||nc<0||nr==n||nc==m) continue;
                    if(grid[nr][nc]==1)
                    {
                        grid[nr][nc]=2;
                        qtmp.push({nr,nc});
                        f=true;
                    }

                }

            }
            if(f) minute++;
            
        }
        
        for(int i = 0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1){
                    return -1;
                }
            }
        }
        
        return minute;
        
    }
};