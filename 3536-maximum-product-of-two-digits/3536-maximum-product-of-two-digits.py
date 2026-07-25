
class Solution(object):
    def maxProduct(self, n):
        a=map(int,str(n))
        b=max(a)
        a.remove(b)
        c=max(a)
        return b*c
