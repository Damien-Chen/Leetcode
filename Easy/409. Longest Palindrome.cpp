class Solution {
public:
    int longestPalindrome(string s) {
        // s = "abccccdd"
        unordered_map<char,int> mp;
        int ans = 0;
        bool odd = false;
        for(int i=0;i<s.size();i++){
            mp[s[i]] += 1;
        }// mp<a,1>,<b,3>,<c,4>
        
        for(auto x : mp){
            if(x.second % 2 == 0){
                ans += x.second;
            }
            else{
                ans = ans + x.second - 1;
                odd = true;
            }
        }
        if(odd){
            return ans + 1;
        }
        return ans;
    }
};