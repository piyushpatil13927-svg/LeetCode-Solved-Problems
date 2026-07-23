class Solution(object):
    def countDigitOccurrences(self, nums, digit):
        a=""
        for i in nums:
            a+=str(i)
        return a.count(str(digit))