class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        mp={}
        mp[0]=1
        result=sum=0
        for i in range(len(nums)):
            sum+=nums[i]
            rem = sum-k
            result+=mp.get(rem,0)
            mp[sum]=mp.get(sum,0)+1
        return result

