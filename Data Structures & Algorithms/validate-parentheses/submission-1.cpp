class Solution {
public:
    bool isValid(string s) {

        stack<char> validParam;
        for(char ch:s)
        {
            if(ch == '[' || ch == '{' || ch == '(')
                validParam.push(ch);
            else
            {
                if(validParam.empty())
                    return false;
                if( ch == ']' && validParam.top()!='[')
                    return false;
                if ( ch == '}' && validParam.top()!='{')
                    return false;
                if( ch == ')' && validParam.top()!='(')
                    return false;
                validParam.pop();
            }
        }
        
        return validParam.empty();
        
    }
};
