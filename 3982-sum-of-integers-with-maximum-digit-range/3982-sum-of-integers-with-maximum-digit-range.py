class Solution(object):
    def maxDigitRange(self, nums):
        b=[]
        c=0
        for i in nums:
            a=list(str(i))
            b.append(int(max(a))-int(min(a)))
        for i in range(0,len(b)):
            if b[i]==max(b):
                c+=nums[i]
        return c
