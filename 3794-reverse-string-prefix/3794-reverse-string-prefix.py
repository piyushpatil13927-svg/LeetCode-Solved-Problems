class Solution(object):
    def reversePrefix(self, s, k):
        b=""
        for i in range(k):
            b+=s[i]
        b=b[::-1]
        b+=s[k:]
        return b

            

        