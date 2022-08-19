class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int right = 1;
        int profit;
        int max_profit = 0;
        while(right < prices.size()){
            if(prices[left] < prices[right]){
                profit = prices[right] - prices[left];
                max_profit = max(profit, max_profit);
            }
            else 
                left = right;
            
            right += 1;
        }
        return max_profit;
        
    }
};