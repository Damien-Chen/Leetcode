class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> stk_s;
        stack<char> stk_t;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '#' && !stk_s.empty()){
                stk_s.pop();
            }
            else if (s[i] != '#'){
                stk_s.push(s[i]);
            }
        }
        for(int j = 0; j < t.length(); j++){
            if(t[j] == '#' && !stk_t.empty()){
                stk_t.pop();
            }
            else if(t[j] != '#'){
                stk_t.push(t[j]);
            }
        }
        if(stk_s == stk_t){
            return true;
        }
        return false;
        
    }
};