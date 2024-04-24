/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:
Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
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
Input: s = "(]"
Output: false
*/

class Solution {
    public boolean isValid(String s) {
        Deque<Character> stack = new ArrayDeque<Character>();
        for(int i=0; i<s.length(); i++){
            char j = s.charAt(i);
            if(j=='(' || j=='{' || j=='['){
                stack.push(j);
                continue;
            }
            if(stack.isEmpty())
                return false;
            char check;
            switch(j){
                case ')': check = stack.pop();
                if(check=='{' || check=='[')
                    return false;
                break;

                case'}': check = stack.pop();
                if(check=='(' || check=='[')
                    return false;
                break;

                case ']': check = stack.pop();
                if(check=='{' || check=='(')
                    return false;
                break;
            }
        }
        return (stack.isEmpty());
    }
}
