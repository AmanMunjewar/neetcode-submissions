class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        n_dir = dict()
        for i,j in enumerate(nums):
            n_dir[j] = i

        for i in range(len(nums)):
            a = target - nums[i]
            if (a in n_dir) and (i != n_dir[a]):
                return [i, n_dir[a]]