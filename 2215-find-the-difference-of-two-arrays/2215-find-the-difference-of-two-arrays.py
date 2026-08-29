class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        a=[]
        for i in nums1:
            if i not in nums2:
                if i not in a:
                    a.append(i)
        b=[]
        for i in nums2:
            if i not in nums1:
                if i not in b:
                    b.append(i)
        return [a,b]

        