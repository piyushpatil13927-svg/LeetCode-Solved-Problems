class Solution(object):
    def findDuplicate(self, nums):
        freq = {}
        for num in nums:
            freq[num] = freq.get(num,0)+1 
        for key,val in freq.items():
            if val>1:
                return key
                break
        return -1