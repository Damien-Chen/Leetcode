class Solution {
public:
    // Using hash table
    int firstUniqChar(string s) {
        unordered_map<char, int> result;
        
        for(int i=0;i<s.size();i++){
            result[s[i]]++;
        }
        for(int i=0;i<s.size();i++){
            if(result[s[i]] == 1)
                return i;
        }
        return -1;
    }
};