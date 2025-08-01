/*
Median of Two Sorted Arrays
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.
The overall run time complexity should be O(log (m+n)).
*/
/*
Example 1:
----------
Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
*/
/*
Example 2:
----------
Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
*/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> nums3(n+m);
        for(int i=0; i<n; i++){
            nums3[i]=nums1[i];
        }
        for(int i=0; i<m; i++){
            nums3[n+i]=nums2[i];
        }
        sort(nums3.begin(), nums3.end());
        if(nums3.size()%2 !=0){
            return nums3[nums3.size()/2];
        }
        else{
            double a = nums3[nums3.size()/2];
            double b = nums3[(nums3.size()/2)-1];
            double res = (a+b)/2.0;
            return res;
        }
    }
};
