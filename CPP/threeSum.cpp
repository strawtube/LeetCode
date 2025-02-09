/*
3Sum
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
Notice that the solution set must not contain duplicate triplets.
*/
/*
Example 1:
----------
Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.
*/
/*
Example 2:
----------
Input: nums = [0,1,1]
Output: []
Explanation: The only possible triplet does not sum up to 0.
*/
/*
Example 3:
----------
Input: nums = [0,0,0]
Output: [[0,0,0]]
Explanation: The only possible triplet sums up to 0.
*/

// Time Complexity = O(n³)
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int size = nums.size();
        set<vector<int>> sol_set;
        sort(nums.begin(), nums.end());

        for(int i=0; i<size-2; i++){
            for(int j=i+1; j<size-1; j++){
                for(int k=j+1; k<size; k++){
                    if(nums[i]+nums[j]+nums[k]==0)
                        sol_set.insert({nums[i], nums[j], nums[k]});
                }
            }
        }
        return vector<vector<int>>(sol_set.begin(), sol_set.end());
    }
};

// Time Complexity = O(n²)
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int size = nums.size();
        vector<vector<int>> sol;
        sort(nums.begin(), nums.end());

        for(int i=0; i<size-2; i++){
            if(i>0 && nums[i]==nums[i-1])
                continue;
            
            int left=i+1;
            int right=size-1;

            while(left<right){
                if(nums[i]+nums[left]+nums[right]==0){
                    sol.push_back({nums[i], nums[left], nums[right]});
                    while(left<right && nums[left]==nums[left+1])
                        left++;
                    while(left<right && nums[right]==nums[right-1])
                        right--;
                    left++;
                    right--;
                }
                else if(nums[i]+nums[left]+nums[right]<0)
                    left++;
                else
                    right--;
            }
        }
        return sol;
    }
};
