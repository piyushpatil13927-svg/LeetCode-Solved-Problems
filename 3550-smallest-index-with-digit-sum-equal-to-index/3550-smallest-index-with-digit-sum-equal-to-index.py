class Solution(object):
    def smallestIndex(self, nums):
        b=[]
        for i in nums:
            b.append(sum(map(int,str(i))))
        

        a=[]
        for i in range(len(b)):
            if b[i]==i:
                a.append(i)
        if len(a)==0:
            return -1
        else:
            return min(a)