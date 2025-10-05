class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # Sorting + Two PTR approach
        nums_with_idx = [(num, i) for i, num in enumerate(nums)]
        nums_with_idx.sort()
        left, right = 0, len(nums_with_idx) - 1
        while left < right:
            curr_sum = nums_with_idx[left][0] + nums_with_idx[right][0]
            if curr_sum == target:
                return [nums_with_idx[left][1], nums_with_idx[right][1]]
            elif curr_sum < target:
                left += 1
            else:
                right -= 1
        return []
