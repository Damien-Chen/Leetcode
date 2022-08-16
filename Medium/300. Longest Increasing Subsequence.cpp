class Solution {
public:
    // Solution 1 : DP, time complexity = O(n^2)
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
    // Solution 2 : DP + Greedy + Binary Search, time complexity = O(nlogn)
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp;
        for(int x : nums){
            auto it = lower_bound(begin(dp), end(dp), x);
            if(it == end(dp))
                dp.push_back(x);
            else
                *it = x;
        }
        return dp.size();
};
