class Solution(object):
    def combinationSum(self, candidates, target):
        ans=[]
        path=[]
        def back(start,total):
            if total==target:
                ans.append(path[:])
                return
            if total>target:
                return 
            for i in range(start,len(candidates)):
                path.append(candidates[i])
                back(i,total+candidates[i])
                path.pop()
        back(0,0)
        return ans