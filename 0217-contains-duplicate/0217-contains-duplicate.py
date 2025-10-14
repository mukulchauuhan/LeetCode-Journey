class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        seen = set()
        for i in nums:
            if i in seen:
                return True
            seen.add(i)
        return False
       
        # dict_nums = {}
        # for i in range(len(nums)):
        #     if nums[i] in dict_nums:
        #         return True
        #     dict_nums[nums[i]] = i
        # return False