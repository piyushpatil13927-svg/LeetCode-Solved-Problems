class Solution(object):
    def uncommonFromSentences(self, s1, s2):
        a=list(s1.split(" "))
        b=list(s2.split(" "))
        c=[]
        for i in a:
            if i not in b and a.count(i)==1:
                c.append(i)
        for i in b:
            if i not in a and b.count(i)==1:
                c.append(i)
        return c
                
        