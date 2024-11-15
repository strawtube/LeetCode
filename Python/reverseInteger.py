'''
Reverse Integer
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.
'''
'''
Example 1:
----------
Input: x = 123
Output: 321
'''
'''
Example 2:
----------
Input: x = -123
Output: -321
'''

class Solution:
    def reverse(self, x: int) -> int:
        rev = 0
        sign = 1

        if(x < 0):
            sign = -1
            x = -x

        while x!=0:
            rem = x%10
            x //= 10
            if(rev > 2**31//10 or (rev == 2**31//10 and rem>7)):
                return 0
            if(rev < -2**31//10 or (rev == -2**31//10 and rem<-8)):
                return 0
            rev = rev*10 + rem
            
        rev = rev*sign
        return rev