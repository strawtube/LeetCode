/*
Reverse Words in a String
Given an input string s, reverse the order of the words.
A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.
Return a string of the words in reverse order concatenated by a single space.
*/
/*
Example 1:
----------
Input: s = "the sky is blue"
Output: "blue is sky the"
*/
/*
Example 2:
----------
Input: s = "  hello world  "
Output: "world hello"
Explanation: Your reversed string should not contain leading or trailing spaces.
*/
/*
Example 3:
----------
Input: s = "a good   example"
Output: "example good a"
Explanation: You need to reduce multiple spaces between two words to a single space in the reversed string.
*/

class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        stringstream ss(s);
        string res, word;

        while(ss>>word){
            words.push_back(word);
        }
        for(int i=words.size()-1; i>=0; i--){
            res += words[i];
            if(i>0){
                res += " ";
            }
        }
        return res;
    }
};
