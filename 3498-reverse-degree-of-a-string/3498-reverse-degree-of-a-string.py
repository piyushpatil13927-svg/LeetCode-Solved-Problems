class Solution(object):
    def reverseDegree(self, s):
        a=[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26]
        b=a[::-1]
        c="abcdefghijklmnopqrstuvwxyz"
        pro=0
        for i in range(len(s)):
            pro+=b[c.index(s[i])]*(i+1)
        return pro

           