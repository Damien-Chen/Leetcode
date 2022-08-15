class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int size = nums.size();
        int dp[size];   
        
        // Populating dp
        
        fill(dp, dp+size, 1);
        
        // checking all the numbers before i, looking for ones < nums[i]
        
        for(int i=1;i<size;i++){
            for(int j=0;j<i;j++){
                if(nums[i] >　nums[j])
                    dp[i] = max(dp[j], dp[j] + 1);
            }
        }
        
        return *max_element(dp, dp + size);
    }
};