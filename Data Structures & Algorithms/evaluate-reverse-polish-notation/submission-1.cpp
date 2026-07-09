class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        stack<int> expression;
        int result;
        for(int i=0;i<n;i++)
        {
            string ch = tokens[i];
            if( ch == "+" || ch == "-" || ch == "*" || ch =="/")
            {
                int op1,op2;
                if(!expression.empty()){
                    op1 = expression.top();
                    expression.pop();
                }
                if(!expression.empty()){
                    op2 = expression.top();
                    expression.pop();
                }
                switch (ch[0])
                {
                    case '+' :  expression.push(op2 + op1);
                                break;
                    case '-' :  expression.push(op2 - op1);
                                break;
                    case '*' :  expression.push(op2 * op1);
                                break;
                    case '/' :  expression.push(op2 / op1);
                                break;
                }
            }
            else
            {
                expression.push(stoi(tokens[i]));
            }
        }
        return expression.top();      
    }
};
