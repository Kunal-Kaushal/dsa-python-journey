class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        mp={nums[0]:0}
        for i in range(1,len(nums)):
            rem=target-nums[i]
            if rem in mp:
                return [mp[rem],i]
            mp[nums[i]]=i
        return []