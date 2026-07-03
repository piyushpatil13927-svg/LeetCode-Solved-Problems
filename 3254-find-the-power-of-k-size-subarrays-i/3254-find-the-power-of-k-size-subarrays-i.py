class Solution(object):
    def resultsArray(self, nums, k):
        w=[]
        for i in range(len(nums)-k+1):
            b=nums[i:i+k]
            if all(b[j+1]==b[j]+1 for j in range(len(b)-1)):
                w.append(max(b))
            else:
                w.append(-1)
        return w
