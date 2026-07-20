class Solution(object):
    def hammingWeight(self, n):
        a=bin(n)[2:]
        count=0
        for i in a:
            if i=="1":
                count+=1
        return count