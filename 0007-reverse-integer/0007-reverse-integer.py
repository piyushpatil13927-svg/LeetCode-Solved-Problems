class Solution(object):
    def reverse(self, x):
        a=str(x)[::-1]
        b=""
        for i in a:
            if i!="-":
                b+=i
        if a[-1]=="-":
            ans=int(b)-(2*int(b))
        else:
            ans=int(b)
            
        if ans < -2**31 or ans > 2**31 - 1:
            return 0
        else:
            return ans