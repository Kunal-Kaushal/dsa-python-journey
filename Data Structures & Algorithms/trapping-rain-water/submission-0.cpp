class Solution {
public:
    int trap(vector<int>& height) {
        int leftmax=0,rightmax=0,left=0,right=height.size()-1,total=0;
        while(left<right){
            if(height[left]<height[right]){
                if(height[left]<leftmax){
                    total+=leftmax-height[left];
                    left++;
                }
                else{
                    leftmax=height[left];
                    left++;
                }
            }
            else{
                if(height[right]<rightmax){
                    total+=rightmax-height[right];
                    right--;
                }
                else{
                    rightmax=height[right];
                    right--;
                }
            }
        }
        return total;
    }
};
