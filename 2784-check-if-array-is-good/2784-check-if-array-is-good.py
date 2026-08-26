class Solution(object):
    def isGood(self, nums):
        nums.sort()
        a=[]
        for i in range(1,len(nums)):
            a.append(i)

        a.append(len(nums)-1)
        
        return nums==a
    
            