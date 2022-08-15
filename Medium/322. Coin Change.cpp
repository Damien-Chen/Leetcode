class Solution {
public:
    int Solve(vector<int> coins, int amount, vector<int> &dp){
        if(amount < 0 )
            return 100000;
        if(dp[amount] != -1)
            return dp[amount];
        
        int ans = 100000;
        for(int i=0;i<coins.size();i++){
            ans = min(ans, Solve(coins, amount-coins[i], dp));
        }
        
        return dp[amount] = 1+ans;
    }
        
    
    int coinChange(vector<int>& coins, int amount) {
       vector<int> dp(amount+1, -1);
        dp[0] = 0;
        int ans = Solve(coins, amount, dp);
        
        if(ans>= 100000)
            return -1;
        return ans;
    }
};