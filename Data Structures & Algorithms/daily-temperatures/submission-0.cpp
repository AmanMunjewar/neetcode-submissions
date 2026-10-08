class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int, int>> stk;
        vector<int> result(temperatures.size(), 0);

        for (int i=0; i<temperatures.size(); i++){
            if (stk.empty()){
                stk.push(make_pair(temperatures[i], i));
                continue;
            }

            while (stk.top().first < temperatures[i]){
                result[stk.top().second] = i - stk.top().second;
                stk.pop(); 
                if (stk.empty()) break;
            }

            stk.push(make_pair(temperatures[i], i));
        }

        return result;
    }
};