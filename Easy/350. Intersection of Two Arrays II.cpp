class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            m[nums1[i]]++;
        } // m<4,1> m<9,1> m<5,1>
        for(int i=0;i<nums2.size();i++){
            if(m[nums2[i]] > 0){
                ans.push_back(nums2[i]);
                m[nums2[i]]--;
            } //m<4,0> m<9,0> m<5,1>
        }
        return ans;
    }
};