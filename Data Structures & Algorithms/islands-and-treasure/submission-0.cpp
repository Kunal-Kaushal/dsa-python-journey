class Solution {
public:
    int INF = INT_MAX;
    vector<int>dr ={-1,1,0,0};
    vector<int>dc={0,0,-1,1};
    int bfs(int r ,int c, vector<vector<int>>& grid){
        int n = grid.size();
        int m =grid[0].size();

        queue<pair<int,int>>q;
        vector<vector<bool>>visited(n,vector<bool>(m,false));
        visited[r][c]=true;
        int steps=0;
        q.push({r,c});
        while(!q.empty()){
            int size=q.size();
            for(int i =0;i<size;i++){
                auto [r,c]= q.front();
                q.pop();
                for(int i =0;i<4;i++){
                    int nr = r+ dr[i];
                    int nc = c+dc[i];
                    
                    if(nr<n && nr>=0 && nc<m && nc>=0 && grid[nr][nc]!=-1 && !visited[nr][nc]){
                        if(grid[nr][nc]==0) return steps+1;
                        visited[nr][nc]=true;
                        q.push({nr,nc});
                    }
                }
            }
            steps++;

        }
        return INF;
    }
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int n = grid.size();
        int m =grid[0].size();
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(grid[i][j]==INF){
                    grid[i][j]=bfs(i,j,grid);
                }
            }
        }
    }
};
