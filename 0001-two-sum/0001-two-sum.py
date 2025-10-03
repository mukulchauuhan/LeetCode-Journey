class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # Brute-force Approach
        # n = len(nums)
        # for i in range(n):
        #     for j in range (i+1, n):
        #         if nums[i] + nums[j] == target:
        #             return [i, j]
        # return []
        dict_anshi={}
        n = len(nums)
        for i in range(n):
            complement = target - nums[i]
            if complement in dict_anshi:
                return [dict_anshi[complement], i]
            dict_anshi[nums[i]] = i
        return []









        # dict_nums = {}
        # for i in range(len(nums)):
        #     complement = target - nums[i]
        #     if complement in dict_nums:
        #         return [dict_nums[complement], i]
        #     dict_nums[nums[i]] = i
        # return []