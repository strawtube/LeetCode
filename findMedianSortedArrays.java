/*
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
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int len1 = nums1.length;
        int len2 = nums2.length;
        int merged[] = new int[len1+len2];
        int len3 = merged.length;

        for(int i=0; i<len1; i++)
            merged[i] = nums1[i];
        for(int i=len1; i<len3; i++)
            merged[i] = nums2[i-len1];

        Arrays.sort(merged);

        if(len3 % 2!=0)
            return merged[(len3)/2];

        else{
            double a = merged[len3/2];
            double b = merged[(len3/2) - 1];
            double result = (a+b)/2;
            return result;
        }
    }
}
