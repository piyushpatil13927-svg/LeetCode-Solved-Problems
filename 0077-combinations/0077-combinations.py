class Solution(object):
    def combine(self, n, k):
        ans=[]
        path=[]
        def back(i):
            if len(path)==k:
                ans.append(path[:])
                return 
            need = k-len(path)
            for i in range(i,n-need+2):
                path.append(i)
                back(i+1)
                path.pop()
        back(1)
        return ans

       