class Solution(object):
    def sumOfEncryptedInt(self, nums):
        s=0
        
        for i in nums:

            a=list(str(i))
            b=len(a)
            c=max(a)
            d=c*b
            s+=int(d)
        return s
            