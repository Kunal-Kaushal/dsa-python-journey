class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // unordered_set<char>seen;
        // int l=0,r=0;
        // int maxlen=0;
        // while(r<s.size()){
        //     if(seen.find(s[r])==seen.end()){
        //         seen.insert(s[r]);
        //         maxlen=max(maxlen,r-l+1);
        //         r++;
        //     }
        //     else{
        //         seen.erase(s[l]);
        //         l++;
        //     }
        // }
        // return maxlen;


        unordered_map<char,int>mpp;
        int l=0,r=0;
        int res=0;
        while(r<s.size()){
            if(mpp.find(s[r])!=mpp.end()){
                l=max(l,mpp[s[r]]+1);
            }
            mpp[s[r]]=r;
            res=max(res,r-l+1);
            r++;
        }
        return res;
    }
};
