#include <iostream>
class Solution {
public:
    bool isValid(string s) {
        stack<char> res;
        
        for(int i=0;i<s.size();i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                res.push(s[i]);
            else if(s[i] == ')' && !res.empty() && res.top() == '(')
                res.pop();
            else if(s[i] == ']' && !res.empty() && res.top() == '[')
                res.pop();
            else if(s[i] == '}' && !res.empty() && res.top() == '{')
                res.pop();
            else
                res.push(s[i]);
        }
        if(res.empty())
            return true;
        else
            return false;
         
    }
};