class Solution(object):
    def restoreString(self, s, indices):
        d={}
        for i in range(len(indices)):
            d[indices[i]]=s[i]
        sort = dict(sorted(d.items()))
        a=""
        for i in range(len(sort)):
            a+=sort[i]

        return a
            

        