/*
Remove Duplicates from Sorted Array
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.
*/
/*
Example 1:
----------
Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
*/
/*
Example 2:
----------
Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
*/
/*
Example 3:
----------
Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        int n = 1;
        for(int i=1; i<size; i++){
            if(nums[i]!=nums[i-1]){
                nums[n] = nums[i];
                n++;
            }
        }
        return n;
    }
};
