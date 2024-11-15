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
    int getVal(char x){
        if(x=='I')
            return 1;
        if(x=='V')
            return 5;
        if(x=='X')
            return 10;
        if(x=='L')
            return 50;
        if(x=='C')
            return 100;
        if(x=='D')
            return 500;
        if(x=='M')
            return 1000;
        else return -1;
    }
    public int romanToInt(String s) {
        int result=0;
        for(int i=0; i<s.length(); i++){
            int r1 = getVal(s.charAt(i));
            if(s.length()>i+1){
                int r2 = getVal(s.charAt(i+1));
                if(r1>=r2)
                    result = result+r1;
                else{
                    result = result + r2 - r1;
                    i++;
                }
            }
            else
                result = result + r1;
        }
        return result;
    }
}
