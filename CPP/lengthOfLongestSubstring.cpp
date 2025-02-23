/*
Longest Substring Without Repeating Characters
Given a string s, find the length of the longest substring without duplicate characters.
*/
/*
Example 1:
----------
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
*/
/*
Example 2:
----------
Input: s = "bbbbb"
Output: 1
*/
/*
Example 3:
----------
Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0;
        int maxLength = 0;
        unordered_set<char> charSet;

        for(int end=0; end<s.length(); end++){
            while (charSet.find(s[end])!=charSet.end()){
                charSet.erase(s[start]);
                start+=1;
            }
            charSet.insert(s[end]);
            maxLength = max(maxLength, end-start+1);
        }
        return maxLength;
    }
};
