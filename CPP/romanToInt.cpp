/*
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000

Given a roman numeral, convert it to an integer.
*/
/*
Example 1:
----------
Input: s = "III"
Output: 3
Explanation: III = 3.
*/

/*
Example 2:
----------
Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.
*/

/*
Example 3:
----------
Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
*/

class Solution {
public:
    int referAndGet(char c){
        if(c=='I')
            return 1;
        if(c=='V')
            return 5;
        if(c=='X')
            return 10;
        if(c=='L')
            return 50;
        if(c=='C')
            return 100;
        if(c=='D')
            return 500;
        if(c=='M')
            return 1000;
        else
            return -1;
    }
    int romanToInt(string s) {
        int res = 0;
        for(int i=0; i<s.length(); i++){
            int letter1 = referAndGet(s[i]);
            if(s.length()>i+1){
                int letter2 = referAndGet(s[i+1]);
                if(letter1>=letter2){
                    res += letter1;
                }
                else{
                    res += letter2-letter1;
                    i++;
                }
            }
            else{
                res += letter1;
            }
        }
         return res;
    }
};
