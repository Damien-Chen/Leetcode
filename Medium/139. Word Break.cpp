class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int size = s.size();
        
      //dp[i]: whether we can make the segmentation s[0:1] with the wordDict or not.
        bool dp[301]; 
        
      // set all element in dp[] to false.
        memset(dp, false, sizeof(dp));
        dp[0] = true;
      
        unordered_set<string> hs;
        
        for(string s : wordDict){
            hs.insert(s);
        }
        
        for(int i=0;i<size;i++){
            if(!dp[i]) continue;
            string sb = "";
            
            for(int j=i;j<size;j++){
                sb.push_back(s[j]);
                
                if(hs.count(sb)){
                    dp[j+1] = true;
                }
            }
        }
        return dp[size];
    }
};