class Solution(object):
    def letterCombinations(self, digits):
        dist = [["abc"],["def"],["ghi"],["jkl"],["mno"],["pqrs"],["tuv"],["wxyz"]]
        digits = list(map(int,str(digits)))
        b=[]
        for i in digits:
            b+=dist[i-2]
        ans=[]
        path=[]
        def back(i):
            if i==len(b):
                ans.append("".join(path))
                return 
            for ch in b[i]:
                path.append(ch)
                back(i+1)
                path.pop()
        back(0)
        return ans
