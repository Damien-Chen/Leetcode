class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // 1 2 3 4 5 6 7
        k = k % nums.size(); // make sure k < nums.size
        reverse(nums.begin(), nums.end());
        // 7 6 5 4 3 2 1
        
        reverse(nums.begin() + k, nums.end());
        // 7 6 5 1 2 3 4
        
        reverse(nums.begin(), nums.end() - (nums.size() - k));
        // 5 6 7 1 2 3 4
    }
};