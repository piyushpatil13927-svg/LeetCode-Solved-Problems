class Solution(object):
    def sumBase(self, n, k):
        suma=0
        while n>0:
            digit = n%k
            suma+=digit
            n//=k
        return suma

        