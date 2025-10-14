class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        dict_nums = {}
        for i in range(len(nums)):
            if nums[i] in dict_nums:
                return True
            dict_nums[nums[i]] = i
        return False