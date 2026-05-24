class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        row = [set() for _ in range(9)]
        col = [set() for _ in range(9)]
        boxes = [set() for _ in range(9)]
        for i in range(9):
            for j in range(9):
                if board[i][j]==".":
                    continue
                num = board[i][j]
                box=(i//3)*3 +(j//3)
                if num in row[i] or num in col[j] or num in boxes[box]:
                    return False
                
                row[i].add(board[i][j])
                col[j].add(board[i][j])
                boxes[box].add(board[i][j])
        return True

