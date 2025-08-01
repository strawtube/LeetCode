/*
Remove Duplicates from Sorted Array II
Given an integer array nums sorted in non-decreasing order, remove some duplicates in-place such that each unique element appears at most twice. The relative order of the elements should be kept the same.
Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.
Return k after placing the final result in the first k slots of nums.
*/
/*
Example 1:
----------
Input: nums = [1,1,1,2,2,3]
Output: 5, nums = [1,1,2,2,3,_]
*/
/*
Example 2:
----------
Input: nums = [0,0,1,1,1,1,2,3,3]
Output: 7, nums = [0,0,1,1,2,3,3,_,_]
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        if(size<=2)
            return nums.size();
        int n = 2;
        for(int i=2; i<size; i++){
            if(nums[i]!=nums[n-2]){
                nums[n] = nums[i];
                n++;
            }
        }
        return n;
    }
};
