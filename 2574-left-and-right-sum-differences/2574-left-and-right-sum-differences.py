class Solution:
    def leftRightDifference(self, nums: List[int]) -> List[int]:
        left = [0]
        for i in range(1,len(nums)):
            left.append(sum(nums[0:i]))
        
        a=nums[::-1]
        right = []
        for i in range(len(nums)-1,0,-1):
            right.append(sum(a[0:i]))
        right.append(0)
        
        ans = []
        for i in range(len(right)):
            ans.append(abs(left[i]-right[i]))
        return ans
