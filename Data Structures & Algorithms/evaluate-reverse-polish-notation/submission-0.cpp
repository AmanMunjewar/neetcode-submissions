class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> evals;

        unordered_set<string> symbol = {"+", "-", "*", "/"};

        for (string str: tokens){
            if (symbol.count(str)){
                int b = evals.top(); evals.pop();
                int a = evals.top(); evals.pop();
                
                if (str == "+"){
                    evals.push(a+b);
                }
                else if (str == "-"){
                    evals.push(a-b);
                }
                else if (str == "*"){
                    evals.push(a*b);
                }
                else if(str == "/"){
                    evals.push(a/b);
                }
            }
            else {
                evals.push(stoi(str));
            }
        }

        return evals.top();
    }
};