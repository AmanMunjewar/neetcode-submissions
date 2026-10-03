class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        return nums.__len__() != set(nums).__len__()