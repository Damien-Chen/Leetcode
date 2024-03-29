//Kadane’s Algorithm
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size = nums.size();
        int maxresult = nums[0];
        int cursum = 0;
        
        for(int i=0;i<size;i++){          
            if(cursum < 0){
                cursum = 0;
            }
            cursum += nums[i];
            maxresult = max(maxresult,cursum);
        }
        
        return maxresult;
    }
};