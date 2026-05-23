class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        mp={}
        for s in strs:
            sorted_s = ''.join(sorted(s))

            
            
            if sorted_s not in mp:
                mp[sorted_s]=[]
            mp[sorted_s].append(s)
        ans=[]
        for keys in mp:
            ans.append(mp[keys])
        return ans
