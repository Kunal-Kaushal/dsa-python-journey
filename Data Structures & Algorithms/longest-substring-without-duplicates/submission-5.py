class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if len(s)<=1:
            return len(s)
        mp=set()
        res=0
        curr=0
        start=0
        for i in range(len(s)):
            if s[i] in mp:
                res=max(curr,res)

                while s[i] in mp:
                    mp.discard(s[start])
                    start+=1
                    curr-=1

            curr+=1
            mp.add(s[i])
        return max(curr,res)

