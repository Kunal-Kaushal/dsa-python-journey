class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>freq(26,0);
        int maxcount=0,r=0,l=0,res=0;
        for(int r=0;r<s.length();r++){
            freq[s[r]-'A']++;
            maxcount=max(maxcount,freq[s[r]-'A']);
            while((r-l+1)-maxcount>k){
                freq[s[l]-'A']--;
                l++;
            }
            res=max((r-l+1),res);
        }
        return res;
    }
};
