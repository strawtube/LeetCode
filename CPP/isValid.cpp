/*
Valid Parentheses
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
An input string is valid if:
1. Open brackets must be closed by the same type of brackets.
2. Open brackets must be closed in the correct order.
3. Every close bracket has a corresponding open bracket of the same type.
*/
/*
Example 1:
----------
Input: s = "()"
Output: true
*/
/*
Example 2:
----------
Input: s = "()[]{}"
Output: true
*/
/*
Example 3:
----------
Input: s = "(]"
Output: false
*/

class Solution {
public:
    bool isValid(string s) {
        stack<char> c;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                c.push(s[i]);
            }
            else{
                if(c.empty())
                    return false;
                char top = c.top();
                c.pop();
                if((s[i]==')' && top!='(') || (s[i]=='}' && top!='{') || (s[i]==']' && top!='[')){
                    return false;
                }
            }
        }
        return c.empty();
    }
};
