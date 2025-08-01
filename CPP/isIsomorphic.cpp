/*
Isomorphic Strings
Given two strings s and t, determine if they are isomorphic.
Two strings s and t are isomorphic if the characters in s can be replaced to get t.
All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.
*/
/*
Example 1:
----------
Input: s = "egg", t = "add"
Output: true
Explanation:
The strings s and t can be made identical by:
Mapping 'e' to 'a'.
Mapping 'g' to 'd'.
*/
/*
Example 2:
----------
Input: s = "foo", t = "bar"
Output: false
*/
/*
Example 3:
----------
Input: s = "paper", t = "title"
Output: true
*/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length())
            return false;
        unordered_map<char, char> s_t, t_s;
        for(int i=0; i<s.length(); i++){
            if(s_t.count(s[i])){
                if(s_t[s[i]]!=t[i])
                    return false;
            }
            else{
                s_t[s[i]]=t[i];
            }
            if(t_s.count(t[i])){
                if(t_s[t[i]]!=s[i])
                    return false;
            }
            else{
                t_s[t[i]]=s[i];
            }
        }
        return true;
    }
};
