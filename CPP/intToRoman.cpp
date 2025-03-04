/*
Integer to Roman
Seven different symbols represent Roman numerals with the following values:
Symbol	Value
I	1
V	5
X	10
L	50
C	100
D	500
M	1000
Given an integer, convert it to a Roman numeral.
*/
/*
Example 1:
----------
Input: num = 3749
Output: "MMMDCCXLIX"
Explanation:
3000 = MMM as 1000 (M) + 1000 (M) + 1000 (M)
 700 = DCC as 500 (D) + 100 (C) + 100 (C)
  40 = XL as 10 (X) less of 50 (L)
   9 = IX as 1 (I) less of 10 (X)
Note: 49 is not 1 (I) less of 50 (L) because the conversion is based on decimal places
*/
/*
Example 2:
----------
Input: num = 58
Output: "LVIII"
Explanation:
50 = L
 8 = VIII
*/

class Solution {
public:
    string intToRoman(int num) {
        string res="";
        vector<pair<int, string>> roman={
            {1000, "M"},
            {900, "CM"},
            {500, "D"},
            {400, "CD"},
            {100, "C"},
            {90, "XC"},
            {50, "L"},
            {40, "XL"},
            {10, "X"},
            {9, "IX"},
            {5, "V"},
            {4, "IV"},
            {1, "I"}
        };
        for(int i=0; i<roman.size(); i++){
            while(num>=roman[i].first){
                res+=roman[i].second;
                num-=roman[i].first;
            }
        }
        return res;
    }
};
