/*
Given an array of integers nums, find the next permutation of nums.
The replacement must be in place and use only constant extra memory.
*/

/*
Example 1:
----------
Input: nums = [1,2,3]
Output: [1,3,2]
*/

/*
Example 2:
----------
Input: nums = [3,2,1]
Output: [1,2,3]
*/

class Solution {
    public void nextPermutation(int[] nums) {
        int n = nums.length, i, j;
        for (i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                break;
            }
        }
        if (i < 0) {
            reverse(nums, 0, nums.length - 1);
        }
        else {
            for (j = n - 1; j > i; j--) {
                if (nums[j] > nums[i]) {
                    break;
                }
            }
            swap(nums, i, j);
            reverse(nums, i + 1, nums.length - 1);
        }
    }
    static void reverse(int[] a, int i, int j){
        while (i < j) {
            swap(a, i, j);
            i++;
            j--;
        }
    }
    static void swap(int[] a, int i, int j){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}
