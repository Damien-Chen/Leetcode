class Solution {
public:
    int binarySearch(vector<int>& nums, int target, bool ch){
        int left = 0;
        int right = nums.size() - 1;
        int i = -1;
        while(left <= right){
            int mid = (left + right) / 2;
            if(nums[mid] > target){
                right = mid - 1;
            }
            else if(nums[mid] < target){
                left = mid + 1;
            }
            else{
                i = mid;
                if(ch){
                    right = mid - 1;
                }
                else{
                    left = mid + 1;
                }
            }
        }
        return i;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        // nums = [5,7,7,8,8,10]
        // target = 8
        int left = binarySearch(nums, target, true); // find leftmost bound
        int right = binarySearch(nums, target, false); // find rightmost bound
        return {left, right};
    }
};