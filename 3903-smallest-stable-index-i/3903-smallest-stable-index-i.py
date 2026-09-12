class Solution:
    def firstStableIndex(self, nums: list[int], k: int) -> int:
        a = []

        for i in range(len(nums)):
            a.append(max(nums[:i+1]) - min(nums[i:]))

        for i in range(len(a)):
            if a[i] <= k:
                return i

        return -1