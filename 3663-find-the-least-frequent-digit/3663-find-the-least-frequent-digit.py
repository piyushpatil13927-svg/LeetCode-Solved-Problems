class Solution(object):
    def getLeastFrequentDigit(self, n):
        a={}
        for i in str(n):
            if i in a:
                a[i]+=1
            else:
                a[i]=1
        b=sorted(list(a.values()))
        c=[]
        for key,val in a.items():
            if val==b[0]:
                c.append(int(key))
        c.sort()
        return c[0]
        
        