/*
Basic Calculator
Given a string s representing a valid expression, implement a basic calculator to evaluate it, and return the result of the evaluation.
Note: You are not allowed to use any built-in function which evaluates strings as mathematical expressions, such as eval().
*/
/*
Example 1:
----------
Input: s = "1 + 1"
Output: 2
*/
/*
Example 2:
----------
Input: s = " 2-1 + 2 "
Output: 3
*/
/*
Example 3:
----------
Input: s = "(1+(4+5+2)-3)+(6+8)"
Output: 23
*/

class Solution {
public:
    int calculate(string s) {
        stack<int> stack;
        int num=0, res=0, sign=1;
        for(int i=0; i<s.size(); i++){
            if(isdigit(s[i])){
                num=num*10+(s[i]-'0');
            }
            else if(s[i]=='+' || s[i]=='-'){
                res=res+sign*num;
                num=0;
                sign=(s[i]=='+')?1:-1;
            }
            else if(s[i]=='('){
                stack.push(res);
                stack.push(sign);
                res=0;
                sign=1;
            }
            else if(s[i]==')'){
                res=res+sign*num;
                num=0;
                res=res*stack.top();
                stack.pop();
                res=res+stack.top();
                stack.pop();
            }
        }
        return res+sign*num;
    }
};
