class Solution(object):
    def canAliceWin(self, nums):
        s=0
        d=0
        for i in nums:
            if i<10:
                s+=i
            elif i>=10:
                d+=i
        if s==d:
            return False
        else:
            return True
        
        
        