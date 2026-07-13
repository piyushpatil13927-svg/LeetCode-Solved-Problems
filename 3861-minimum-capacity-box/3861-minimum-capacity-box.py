class Solution(object):
    def minimumIndex(self, capacity, itemSize):
        a=[]
        for i in range(len(capacity)):
            if capacity[i]>=itemSize:
                a.append(capacity[i])
        if len(a)==0:
            return -1
        else:
            return capacity.index(min(a))
