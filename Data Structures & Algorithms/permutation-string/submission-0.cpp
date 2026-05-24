class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>freq1(26,0),freq2(26,0);
        for(char c:s1){
            freq1[c-'a']++;
        }
        
        for(int r=0;r<s2.length();r++){
            freq2[s2[r]-'a']++;
            if(r>=s1.length()){
                freq2[s2[r-s1.length()]-'a']--;
            }
            if(freq1==freq2) return true;
            
        }
        return false;
    }
};
