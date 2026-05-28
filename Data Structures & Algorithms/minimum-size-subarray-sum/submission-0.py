class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        currsum=0
        res=float('inf')
        l=0
        for r in range(len(nums)):
            currsum+=nums[r]
            while currsum>=target:
                res=min(res,r-l+1)
                currsum-=nums[l]
                l+=1
                
            

        return 0 if res==float('inf') else res
    