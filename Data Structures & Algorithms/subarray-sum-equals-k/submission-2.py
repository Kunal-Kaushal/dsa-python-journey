class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        mp=defaultdict(int)
        mp[0]=1

        result=sum=0
        for i in range(len(nums)):
            sum+=nums[i]
            rem = sum-k
            if rem in mp:
                result+=mp[rem]
            mp[sum]+=1
        return result

