class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        mp = defaultdict(int)
        mp[numbers[0]]=1
        for i in range(1,len(numbers)):
            rem = target-numbers[i]
            if rem in mp:
                return [mp[rem],i+1]
            mp[numbers[i]]=i+1
        return []