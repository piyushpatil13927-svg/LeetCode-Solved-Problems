class Solution(object):
    def removeZeros(self, n):
        a=list(str(n))
        b=""
        for i in a:
            if i!="0":
                b+=i
        return int(b)
