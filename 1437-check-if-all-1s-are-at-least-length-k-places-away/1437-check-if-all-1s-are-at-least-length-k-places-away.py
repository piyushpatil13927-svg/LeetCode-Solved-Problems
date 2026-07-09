class Solution(object):
    def kLengthApart(self, nums, k):
        if nums.count(1)==1:
            return True
        a=[]
        for i in range(len(nums)):
            if nums[i]==1:
                a.append(i)
        c=[]
        for i in range(len(a)-1,0,-1):
            if a[i]-a[i-1]<=k:
               c.append(a[i]-a[i-1])
        if len(c)==0:
            return True
        else:
            return False