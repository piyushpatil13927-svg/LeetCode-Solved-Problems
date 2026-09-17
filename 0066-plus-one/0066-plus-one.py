class Solution(object):
    def plusOne(self, digits):
        a=''
        for i in range(0,len(digits)):
            a+=str(digits[i])
        b=int(a)+1
        c=str(b)
        d=[]
        for i in c:
           d.append(int(i))
        return d
