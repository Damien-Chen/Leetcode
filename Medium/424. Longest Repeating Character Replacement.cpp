class Solution {
public:
    int characterReplacement(string s, int k) {
        // s = "ababba"
        // k = 2
        int ans = 0;
        unordered_map<char,int> mp;
        int left = 0;
        int right = 0;
        int max_occur_freq = 0;
        while(right < s.size()){
            mp[s[right]]++;

            max_occur_freq = max(mp[s[right]], max_occur_freq);
            if(right - left + 1 - max_occur_freq > k){
                mp[s[left]]--;
                left++;
            }
            else{
                ans = max(right - left + 1, ans);
            }
            right++;
            
        } 
        return ans;
        
    }
};