class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        # for i in range(len(nums)):
        #     for j in range(i+1, len(nums)):
        #         if nums[i] == nums[j]:
        #             return True
        # return False
        # Dict approach
        # dict_nums = {}
        # for i in range(len(nums)):
        #     if nums[i] in dict_nums:
        #         return True
        #     dict_nums[nums[i]]=i
        # return False

        # Set Based approach
        seen = set()
        for num in nums:
            if num in seen:
                return True
            seen.add(num)
        return False