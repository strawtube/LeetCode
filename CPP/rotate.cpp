/*
Rotate Array
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
*/
/*
Example 1:
----------
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
*/
/*
Example 2:
----------
Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
*/

// Time Complexity = O(k*n)
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        for (int i=0; i<k; i++){
            int temp = nums[nums.size()-1];
            for(int j=nums.size()-1; j>0; j--){
                nums[j] = nums[j-1];
            }
            nums[0] = temp;
        }
    }
};

// Time Complexity = O(n)
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp(nums.size());
        for (int i=0; i<nums.size(); i++){
            temp[(i+k)%nums.size()] = nums[i];
        }
        nums = temp;
    }
};
