from collections import Counter
class Solution(object):
    def firstUniqChar(self, s):
        a=list(s)
        freq={}
        for i in a:
            if i in freq:
                freq[i]+=1
            else:
                freq[i]=1
        for i in range(len(a)):
            if freq[a[i]]==1:
                return a.index(a[i])
                break
        return -1
        