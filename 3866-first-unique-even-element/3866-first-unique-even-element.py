class Solution(object):
    def firstUniqueEven(self, nums):
        for i in nums:
            if i%2==0:
                if nums.count(i)==1:
                    return i
                    break
        return -1
        