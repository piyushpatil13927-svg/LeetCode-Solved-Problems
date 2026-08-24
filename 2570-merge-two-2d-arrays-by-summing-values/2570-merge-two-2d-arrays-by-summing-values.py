class Solution(object):
    def mergeArrays(self, nums1, nums2):
        b=[]
        a=[]
        for i in range(len(nums1)):
            for j in range(len(nums2)):
                if nums1[i][0] == nums2[j][0]:
                    a.append([nums1[i][0],nums1[i][1] + nums2[j][1]])
                    b.append(nums1[i][0])
        for i in nums1:
            if i[0] not in b:
                a.append(i)
        for i in nums2:
            if i[0] not in b:
                a.append(i)
        a.sort()
        return a

                
        
        

        