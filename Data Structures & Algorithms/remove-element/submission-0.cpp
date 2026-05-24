class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int left=0,right=nums.size()-1;
        while(left<=right){
            if(nums[left]!=val){
                left++;
                continue;
            }
            if(nums[right]==val){
                right--;
                continue;
            }
            swap(nums[left],nums[right]);
            left++;
            right--;
        }
        return left;
    }
};