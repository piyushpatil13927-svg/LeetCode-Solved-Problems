from itertools import permutations
class Solution(object):
    def getPermutation(self, n, k):
        nums=list(range(1,n+1))
        ans=list(permutations(nums))
        # ans=[]
        # def back(idx):
        #     if idx==len(nums):
        #         ans.append(nums[:])
        #         return 
        #     for i in range(idx,len(nums)):
        #         nums[idx],nums[i]=nums[i],nums[idx]
        #         back(idx+1)
        #         nums[idx],nums[i]=nums[i],nums[idx]
        # back(0)
        ans.sort()
        return ''.join(map(str, ans[k-1]))
