
class Solution(object):
    def maxProduct(self, nums):
        max_p = nums[0]
        min_p = nums[0]
        ans = nums[0]

        for i in range(1,len(nums)):
            if nums[i]<0:
                max_p,min_p = min_p,max_p
            max_p = max(nums[i], max_p*nums[i])
            min_p = min(nums[i], min_p*nums[i])

            ans = max(ans,max_p)
        return ans







        