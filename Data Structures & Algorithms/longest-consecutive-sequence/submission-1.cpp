class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        int longest=0;
        for(int num:s){
            if(s.find(num-1)==s.end()){
                int currentnum=num;
                int currentstreak=1;
                while(s.find(currentnum+1)!=s.end()){
                    currentnum+=1;
                    currentstreak+=1;
                }
                longest=max(longest,currentstreak);
            }
        }
        return longest;
    }
};
