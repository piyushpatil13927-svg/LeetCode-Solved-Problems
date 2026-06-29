class Solution(object):
    def findKthLargest(self, nums, k):
        a=sorted(nums, reverse=True)
        return a[k-1]