/*
Find the Index of the First Occurrence in a String
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
*/
/*
Example 1:
----------
Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
*/
/*
Example 2:
----------
Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.
*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size()==0)
            return 0;
        if(haystack.size()<needle.size())
            return -1;

        for(int i=0; i<=haystack.size()-needle.size(); i++){
            int j=0;
            for(j=0; j<needle.size(); j++){
                if(haystack[i+j]!=needle[j])
                    break;
            }
            if(j==needle.size())
                return i;
        }
        return -1;
    }
};
