'''
Longest Substring Without Repeating Characters
Given a string s, find the length of the longest substring without repeating characters.
'''
'''
Example 1:
----------
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
'''
'''
Example 2:
----------
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
'''

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        charSet = set()
        maxLength = 0
        start = 0
        
        for end in range(len(s)):
            while s[end] in charSet:
                charSet.remove(s[start])
                start+=1
            charSet.add(s[end])
            maxLength = max(maxLength, end-start+1)

        return maxLength
