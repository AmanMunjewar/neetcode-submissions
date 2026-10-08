class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> stk;
        vector<int> result(temperatures.size(), 0);

        for (int i=0; i<temperatures.size(); i++){
            
            while (!stk.empty() && temperatures[stk.top()] < temperatures[i]){
                result[stk.top()] = i - stk.top();
                stk.pop();
            }
            stk.push(i);
        }
        return result;
    }
};