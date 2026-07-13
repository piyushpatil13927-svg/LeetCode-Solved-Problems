class Solution(object):
    def countEven(self, num):
        a=str(num)
        b=0
        for i in a:
            b+=int(i)
        c=0
        if b%2==0:
            for i in range(num+1):
                if i%2==0:
                    c+=1
        else:
            for i in range(num):
                if i%2==0:
                    c+=1
        return c-1


