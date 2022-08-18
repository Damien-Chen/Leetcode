class Solution {
public:
    vector<int> subset;
    vector<vector<int>> powerset;
    
    void dfs(vector<int>& nums, int i){
        if( i == nums.size()){
            powerset.push_back(subset);
            return;
        }
        
        // add nums[i]
        subset.push_back(nums[i]);
        dfs(nums, i+1);
        
        // not to add nums[i]
        subset.pop_back();
        dfs(nums, i+1);
    }
    
    vector<vector<int>> subsets(vector<int>& nums){
        dfs(nums, 0);
        
        return powerset;
    }
};