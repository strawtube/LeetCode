/*
Reverse Integer
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.
*/
/*
Example 1:
----------
Input: x = 123
Output: 321
*/
/*
Example 2:
----------
Input: x = -123
Output: -321
*/

class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        
        while (x != 0) {

            int rem = x%10;
            x /= 10;

            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && rem > 7)) {
                return 0;
            }
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && rem < -8)) {
                return 0;
            }

            rev = rev*10 + rem;
        }

        return rev;
    }
};