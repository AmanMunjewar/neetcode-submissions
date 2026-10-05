class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;

        unordered_map<char, char> match;

        match[')'] = '(';
        match['}'] = '{';
        match[']'] = '[';


        for (char ch : s){
            if (stk.empty()){
                stk.push(ch);
                continue;
            }

            if (match[ch] == stk.top()){
                stk.pop();
                continue;
            }
            stk.push(ch);
        }
        
        if (!stk.empty()) return false;
        return true;
    }
};