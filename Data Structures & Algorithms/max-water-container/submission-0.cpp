class Solution {
public:
    int maxArea(vector<int>& heights) {
      int max_area=INT_MIN;
      int left=0,right=heights.size()-1;
      while(left<right){
        max_area=max(min(heights[left],heights[right])*(right-left),max_area);
        if(heights[left]<heights[right]){
            left++;
        }
        else{
            right--;
        }
        
      }  
      return max_area;
    }
};
