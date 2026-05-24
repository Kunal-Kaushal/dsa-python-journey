class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int max_profit=0,profit;
       int l=0,r=1;
       while(r<prices.size()){
        if(prices[l]<prices[r]){
            profit=prices[r]-prices[l];
            max_profit=max(profit,max_profit);
            
        }
        else{
            l=r;
        }
        r++;
       } 
       return max_profit;
    }
};
