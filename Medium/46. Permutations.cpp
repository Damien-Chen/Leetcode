class Solution {
public:
    
    // Using backtracking
    void fun(int ind, vector<vector<int>> &result, vector<int> &nums){
        if(ind == nums.size()){
            result.push_back(nums);
            return;
        }
        for(int i=ind; i<nums.size();i++){
            
            swap(nums[ind], nums[i]);
            fun(ind + 1,result,nums);
            swap(nums[ind], nums[i]);
            
        }
    }
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> result;
        fun(0, result, nums);
        return result;
    }
};