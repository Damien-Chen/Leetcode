class Solution {
public:
    int maxArea(vector<int>& height) {
        // Time Complexity = O(n)
        // We can use Two Pointers method to solve this problem
        
        // step 1 : Initialize left and right pointer
        // step 2 : compare two value which two pointer point to the index
        // step 3 : store the smaller one, because we have to make sure the container can store water safely.
        // step 4 : calculate the width between two pointer, and its area
        // step 5 : store the largest area we have calculate, and back to 【step 2】until two pointer are next to the                         other.
        int left = 0;
        int right = height.size() - 1;
        int max_height = 0;
        int max_width = 0;
        int ans = 0;
        
        // If only two input, just choose the smaller one and return area
        
        if(right - left == 1){
            if(height[right] > height[left]){
                return height[left];
            }
            else{
                return height[right];
            }
        }
        // step 2 ~ step 5
        while(left < right){
            if(height[left] > height[right] ){
                max_height = height[right];
                max_width = right - left;
                right--;
            }
            else{
                max_height = height[left];
                max_width = right - left;
                left++;
            }
            if(max_height * max_width > ans){
                ans = max_height * max_width;
            }
        }
        return ans;
    }
};