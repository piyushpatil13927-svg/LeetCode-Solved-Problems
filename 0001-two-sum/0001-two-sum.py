class Solution(object):
    def twoSum(self, nums, target):
        li = []
        for i in range(0,len(nums)):
            for j in range(0,len(nums)):
                if i!=j and nums[i] + nums[j] == target:
                    li.append(i)
        return li
       