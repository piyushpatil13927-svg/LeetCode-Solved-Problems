class Solution(object):
    def containsDuplicate(self, nums):
        a={}
        for i in nums:
            if i in a:
                a[i]+=1
            else:
                a[i]=1
        for i in range(len(nums)):
            if a[nums[i]]>=2:
                return True
                break
        return False

            
                