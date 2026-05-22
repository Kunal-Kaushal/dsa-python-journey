# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:

        diameter=0

        def maxDiameter(node):
            nonlocal diameter
            if not node:
                return 0
            left = maxDiameter(node.left)
            right = maxDiameter(node.right)
            diameter = max(diameter,left+right)
            return max(left,right)+1
        
        maxDiameter(root)
        return diameter
        