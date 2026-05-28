class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        rows,cols=len(grid),len(grid[0])
        directions=[(0,1),(1,0),(0,-1),(-1,0)]
        def bfs(r,c):
            q=deque([(r,c)])
            grid[r][c]='0'
            while q:
                r,c=q.popleft()
                for dr,dc in directions:
                    nr,nc=r+dr,c+dc
                    if nr>=0 and nc>=0 and nr<rows and nc<cols and grid[nr][nc]=='1':
                        grid[nr][nc]='0'
                        q.append((nr,nc))
        count=0
        for i in range(rows):
            for j in range(cols):
                if grid[i][j]=='1':
                    bfs(i,j)
                    count+=1
        return count
            