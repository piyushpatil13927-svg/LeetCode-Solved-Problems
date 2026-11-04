class Solution(object):
    def countSubstrings(self, s):
        a = []
        for i in range(len(s)):
            for j in range(i,len(s)):
                a.append(s[i:j+1])
        count = 0
        for i in a:
            if (i == i[::-1]):
                count+=1
        return count

        