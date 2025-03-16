/*
Kth Largest Element in an Array
Given an integer array nums and an integer k, return the kth largest element in the array.
Note that it is the kth largest element in the sorted order, not the kth distinct element.
Can you solve it without sorting?
*/
/*
Example 1:
----------
Input: nums = [3,2,1,5,6,4], k = 2
Output: 5
*/
/*
Example 2:
----------
Input: nums = [3,2,3,1,2,4,5,5,6], k = 4
Output: 4
*/

// Time Limit Exceeded
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        k=nums.size()-k;
        return select(nums, 0, nums.size()-1, k);
    }
private:
    int select(vector<int>& nums, int left, int right, int k){
        if(left==right)
            return nums[left];
        int pivot=median(nums, left, right);
        pivot=partition(nums, left, right, pivot);
        if(k==pivot)
            return nums[k];
        else if(k<pivot)
            return select(nums, left, pivot-1, k);
        else
            return select(nums, pivot+1, right, k);
    }
    int partition(vector<int>& nums, int left, int right, int pivotIndex){
        int pivot=nums[pivotIndex];
        swap(nums[pivotIndex], nums[right]);
        int i=left;
        for(int j=left; j<right; j++){
            if(nums[j]<=pivot){
                swap(nums[i], nums[j]);
                i++;
            }
        }
        swap(nums[i], nums[right]);
        return i;
    }
    int median(vector<int>& nums, int left, int right){
        int mid=left+(right-left)/2;
        if(nums[left]>nums[mid])
            swap(nums[left], nums[mid]);
        if(nums[left]>nums[right])
            swap(nums[left], nums[right]);
        if(nums[mid]>nums[right])
            swap(nums[mid], nums[right]);
        return mid;
    }
};

// minHeap approach - Accepted Solution
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minHeap;
        for(int num:nums) {
            minHeap.push(num);
            if(minHeap.size()>k){
                minHeap.pop();
            }
        }
        return minHeap.top();
    }
};
