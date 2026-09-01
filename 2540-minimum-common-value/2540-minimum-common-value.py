class Solution:
    def getCommon(self, nums1: List[int], nums2: List[int]) -> int:
        a=set(nums2)
        for i in range(len(nums1)):
            if nums1[i] in a:
                return nums1[i]
                break 
        return -1
        
        