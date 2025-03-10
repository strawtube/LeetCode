/*
Summary Ranges
You are given a sorted unique integer array nums.
A range [a,b] is the set of all integers from a to b (inclusive).
Return the smallest sorted list of ranges that cover all the numbers in the array exactly. That is, each element of nums is covered by exactly one of the ranges, and there is no integer x such that x is in one of the ranges but not in nums.
Each range [a,b] in the list should be output as:
"a->b" if a != b
"a" if a == b
*/
/*
Example 1:
----------
Input: nums = [0,1,2,4,5,7]
Output: ["0->2","4->5","7"]
Explanation: The ranges are:
[0,2] --> "0->2"
[4,5] --> "4->5"
[7,7] --> "7"
*/
/*
Example 2:
----------
Input: nums = [0,2,3,4,6,8,9]
Output: ["0","2->4","6","8->9"]
Explanation: The ranges are:
[0,0] --> "0"
[2,4] --> "2->4"
[6,6] --> "6"
[8,9] --> "8->9"
*/

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        if(nums.size()==0){
            return res;
        }
        int ptr=nums[0];
        for(int i=1; i<=nums.size(); i++){
            if(i==nums.size() || nums[i]!=nums[i-1]+1){
                if(ptr==nums[i-1]){
                    res.push_back(to_string(ptr));
                }
                else{
                    res.push_back(to_string(ptr)+"->"+to_string(nums[i-1]));
                }
                if(i<nums.size()){
                    ptr=nums[i];
                }
            }
        }
        return res;
    }
};
