class Solution(object):
    def vowelConsonantScore(self, s):
        v=0
        c=0
        b=["a","e","i","o","u"]
        for i in s:
            if i in b:
                v+=1
            else:
                if i.isalpha():
                   c+=1
        if c>0:
            score = int(floor(v/c))
        else:
            score = 0
        return score
        