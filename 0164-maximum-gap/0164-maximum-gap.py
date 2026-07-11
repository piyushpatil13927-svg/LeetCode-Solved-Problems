class Solution(object):
    def maximumGap(self, nums):
        if len(nums)==1:
            return 0
        b=[]
        nums.sort()
        for i in range(len(nums)-1):
            b.append(nums[i+1]-nums[i])
        return max(b)
