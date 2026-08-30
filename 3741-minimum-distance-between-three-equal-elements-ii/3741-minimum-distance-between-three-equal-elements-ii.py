class Solution(object):
    def minimumDistance(self, nums):
        a=[]
        b={}
        nums_sorted = sorted((x, i) for i, x in enumerate(nums))

        for x, i in nums_sorted:
            if x not in b:
                b[x] = []
            b[x].append(i)

        for key, val in b.items():
            if len(val) >= 3:
                a.append(key)
        if len(a)==0:
            return -1 
        
        
        x=[]
        for key, val in b.items():
            for i in range(len(val)-2):
                va = val[i:i+3]
                x.append(abs(va[0]-va[1])+abs(va[1]-va[2])+abs(va[2]-va[0]))

        return min(x)
        
        
        
        