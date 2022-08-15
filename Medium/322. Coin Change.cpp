class Solution {
public:
    
    # Using DP wiht memoization and recursion
    # {1,3,4,5} amount = 7
    # dp[0] = 0, dp[1] = 1
    # dp[2] = 1 + dp[1] = 2
    # dp[3] = 1, dp[4] = 1 
    # dp[5] = 1, dp[6] = 1 + dp[5] = 2
    # dp[7] = dp[1] + dp[6] = 3
    # dp[7] = dp[3] + dp[4] = 2
    # dp[7] = dp[4] + dp[3] = 2
    # dp[7] = dp[5] + dp[2] = 3
    # return 2
    
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
