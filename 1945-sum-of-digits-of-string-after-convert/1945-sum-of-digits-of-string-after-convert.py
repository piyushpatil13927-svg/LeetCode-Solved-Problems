class Solution(object):
    def getLucky(self, s, k):
        a="abcdefghijklmnopqrstuvwxyz"
        c=""
        for i in s:
            c+=str(a.index(i)+1)
        d=0
        
        for i in c:
            d+=int(i)
        for i in range(k-1):
            s=0
            while d>0:
                s+=d%10
                d//=10
            d=s
        return d
        


        