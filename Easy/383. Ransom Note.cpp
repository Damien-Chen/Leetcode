class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // ransomNote = "aa"
        // magazine = "aab"
        unordered_map<char,int> mp;
        for(int i=0;i<ransomNote.size();i++){
            mp[ransomNote[i]]++;
        } // mp<a,2>
        for(int j=0;j<magazine.size();j++){
            if(mp.find(magazine[j]) != mp.end()){
                mp[magazine[j]]--;
            }
            if(mp[magazine[j]] == 0){
                mp.erase(magazine[j]);
            }
        }// mp []
        if(mp.empty()){
            return true;
        }
        return false;
    }
};