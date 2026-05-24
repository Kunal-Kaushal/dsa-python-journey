class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int i=0,j=nums.size()-1,sum;
        // while(i<j){
        //     sum=nums[i]+nums[j];
        //     if(sum==target){
        //         return {i,j};
        //     }
        //     else if(sum>target){
        //         j--;
        //     }
        //     else i++;
        // }
        // return {};
        unordered_map<int,int>mpp;
        int complement;
        for(int i=0;i<nums.size();i++){
            complement=target-nums[i];
            if(mpp.find(complement)!=mpp.end()){
                return {mpp[complement],i};
            }
            mpp[nums[i]]=i;
        }
        return {};
    }
};
