class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> evals;

        for (string str: tokens){

            if (str != "+" && str != "-" && str != "*" && str != "/") {
                evals.push(stoi(str));
                continue;
            }

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
        return evals.top();
    }
};