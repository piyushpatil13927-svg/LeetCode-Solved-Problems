class Solution(object):
    def digitFrequencyScore(self, n):
        d=0
        a=map(int,str(n))
        b=[]
        for i in a:
            if i not in b:
                b.append(i)

        for i in b:
            d+=i*a.count(i)
        
        return d
        