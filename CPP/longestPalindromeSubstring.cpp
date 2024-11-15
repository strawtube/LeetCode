/*
Longest Palindromic Substring
Given a string s, return the longest palindromic substring in s.
*/
/*
Example 1:
----------
Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.
*/
/*
Example 2:
----------
Input: s = "cbbd"
Output: "bb"
*/

class Solution {
public:
    string longestPalindrome(string s) {

        string output="";
        for(int i=0; i<s.length(); i++){
            //odd length
            int left=i, right=i;
            while(left>=0 && right<s.length() && s[left]==s[right]){
                if(right-left+1 > output.length()){
                    output = s.substr(left, right-left+1);
                }
                left--;
                right++;
            }

            //even length
            left=i, right=i+1;
            while(left>=0 && right<s.length() && s[left]==s[right]){
                if(right-left+1 > output.length()){
                    output = s.substr(left, right-left+1);
                }
                left--;
                right++;
            }
        }
        return output;
    }
};