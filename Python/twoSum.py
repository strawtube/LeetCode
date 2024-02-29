class Solution:
    def twoSum(self, nums, target):
        arr = [0, 0]
        n = len(nums)
        for i in range(n):
            for j in range(i+1, n):
                if nums[i] + nums[j] == target:
                    arr[0] = i
                    arr[1] = j
                    return arr
