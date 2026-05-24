class Solution {
public:
    string minWindow(string s, string t) {
        if(t.empty()) return "";
        unordered_map<char,int> countT,window;
        for(char c: t){
            countT[c]++;
        }

        int have=0,need=countT.size();
        int left=0,resLen=INT_MAX,resStart=0;
        for(int right=0;right<s.length();right++){
            char c=s[right];
            window[c]++;
            if(countT.count(c) && window[c]==countT[c]){
                have++;
            }

            while(have==need){
                if((right-left+1)<resLen){
                    resLen=right-left+1;
                    resStart=left;
                }

                window[s[left]]--;
                if(countT.count(s[left]) && window[s[left]]<countT[s[left]]){
                    have--;
                }
                left++;
            }
        }
        return resLen==INT_MAX?"":s.substr(resStart,resLen);
    }
};
