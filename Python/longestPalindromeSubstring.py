'''
Longest Palindromic Substring
Given a string s, return the longest palindromic substring in s.
'''
'''
Example 1:
----------
Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.
'''
'''
Example 2:
----------
Input: s = "cbbd"
Output: "bb"
'''

class Solution(object):
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """
        output = ""
        for i in range(len(s)):
            #odd length
            left = i
            right = i
            while (left>=0 and right<len(s) and s[left]==s[right]):
                if(right-left+1 > len(output)):
                    output = s[left : right+1]
                left-=1
                right+=1
            
            
            #even length
            left = i
            right = i+1
            while (left>=0 and right<len(s) and s[left]==s[right]):
                if(right-left+1 > len(output)):
                    output = s[left : right+1]
                left-=1
                right+=1
        return output
        