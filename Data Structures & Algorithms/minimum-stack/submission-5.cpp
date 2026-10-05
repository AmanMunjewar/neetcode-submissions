class MinStack {
public:
    vector<int> arr;
    vector<int> min_arr;
    int min_ele = INT_MAX;
    
    
    MinStack() {
    }
    
    void push(int val) {
        arr.push_back(val);
        min_ele = min(min_ele, val);
        min_arr.push_back(min_ele);
    }
    
    void pop() {
        arr.pop_back();
        min_arr.pop_back();
        min_ele = min_arr.empty() ? INT_MAX : min_arr.back();
    }
    
    int top() {
        return arr.back();
    }
    
    int getMin() {

        return min_ele;
    }
};