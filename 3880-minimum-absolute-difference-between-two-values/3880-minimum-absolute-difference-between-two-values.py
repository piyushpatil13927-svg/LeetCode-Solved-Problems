class Solution(object):
    def minAbsoluteDifference(self, nums):
        a=[]
        for i in range(len(nums)):
            for j in range(len(nums)):
                if nums[i]==1 and nums[j]==2:
                    a.append(abs(i-j))
        if len(a)!=0:
            return min(a)
        else:
            return -1
                    
        