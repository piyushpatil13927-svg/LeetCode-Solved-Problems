class Solution(object):
    def finalString(self, s):
        b=""
        for i in s:
            if i=="i":
                b=b[::-1]
            else:
                b+=i
        return b


        