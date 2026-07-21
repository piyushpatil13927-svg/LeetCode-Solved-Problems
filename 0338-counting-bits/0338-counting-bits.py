class Solution(object):
    def countBits(self, n):
        a=[]
        for i in range(n+1):
            a.append((bin(i)[2:]).count("1"))
        return a

        