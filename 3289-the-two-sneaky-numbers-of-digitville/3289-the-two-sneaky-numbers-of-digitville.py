class Solution(object):
    def getSneakyNumbers(self, nums):
        a=[]
        for i in nums:
            if nums.count(i)==2:
                if i not in a:
                   a.append(i)
        return a
        
        