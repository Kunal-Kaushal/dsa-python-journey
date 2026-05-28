class Solution:
    def maxAreaOfIsland(self, grid: List[List[int]]) -> int:
        

      

        rows,cols=len(grid),len(grid[0])
        directions=[(0,1),(1,0),(0,-1),(-1,0)]
        def bfs(r,c):
            area=0
            q=deque([(r,c)])
            grid[r][c]=0
            area+=1
            while q:
                r,c=q.popleft()
                for dr,dc in directions:
                    nr,nc=r+dr,c+dc
                    if nr>=0 and nc>=0 and nr<rows and nc<cols and grid[nr][nc]==1:
                        grid[nr][nc]=0
                        area+=1
                        q.append((nr,nc))
            return area
        maxarea=0
        for i in range(rows):
            for j in range(cols):
                if grid[i][j]==1:
                    area=bfs(i,j)
                    maxarea=max(area,maxarea)
        return maxarea
            