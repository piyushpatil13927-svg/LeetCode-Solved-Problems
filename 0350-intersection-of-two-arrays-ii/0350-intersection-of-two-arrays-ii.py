class Solution(object):
    def intersect(self, nums1, nums2):
        b={}
        for i in range(len(nums1)):
            if nums1[i] in nums2:
                b[nums1[i]]=[nums1.count(nums1[i]),nums2.count(nums1[i])]
        c=[]
        for key,val in b.items():
            for i in range(min(val)):
                c.append(key) 
        return c
    