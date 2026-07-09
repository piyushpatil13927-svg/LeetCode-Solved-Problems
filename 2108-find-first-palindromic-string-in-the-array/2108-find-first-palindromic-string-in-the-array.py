class Solution(object):
    def firstPalindrome(self, words):
        b=[]
        for i in words:
            if i==i[::-1]:
                b.append(i)
        if len(b)==0:
            return ""
        else:
            return b[0]
