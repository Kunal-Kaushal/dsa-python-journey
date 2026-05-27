class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        mp = defaultdict(int)
        start=res=maxf=0
        for i in range(len(s)):
            mp[s[i]]+=1
            maxf=max(maxf,mp[s[i]])
            while (i-start+1)-maxf >k:
                mp[s[start]]-=1
                start+=1
            res=max(res,i-start+1)
                
        return res