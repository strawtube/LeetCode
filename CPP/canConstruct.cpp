/*
Ransom Note
Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.
Each letter in magazine can only be used once in ransomNote.
*/
/*
Example 1:
----------
Input: ransomNote = "a", magazine = "b"
Output: false
*/
/*
Example 2:
----------
Input: ransomNote = "aa", magazine = "ab"
Output: false
*/
/*
Example 3:
----------
Input: ransomNote = "aa", magazine = "aab"
Output: true
*/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> count;
        for(char i : magazine){
            count[i]++;
        }
        for(char i : ransomNote){
            if(count[i]>0)
                count[i]--;
            else
                return false;
        }
        return true;
    }
};
