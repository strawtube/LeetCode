/*
Given an array of integers nums, calculate the pivot index of this array.
The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.
If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.
Return the leftmost pivot index. If no such index exists, return -1.
*/

/*
Example 1:
----------
Input: nums = [1,7,3,6,5,6]
Output: 3
Explanation:
The pivot index is 3.
Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
Right sum = nums[4] + nums[5] = 5 + 6 = 11
*/

/*
Example 2:
----------
Input: nums = [1,2,3]
Output: -1
Explanation:
There is no index that satisfies the conditions in the problem statement.
*/
  
class Solution {
    public int pivotIndex(int[] nums) {
        int left=0, right=Arrays.stream(nums).sum(), n=nums.length;
        for(int i=0; i<n; i++){
            right-=nums[i];
            if(left==right)
                return i;
            left+=nums[i];
        }
        return -1;
    }
}
