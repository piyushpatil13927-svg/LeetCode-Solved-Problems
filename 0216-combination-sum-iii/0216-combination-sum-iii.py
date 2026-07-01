from itertools import combinations
class Solution(object):
    def combinationSum3(self, k, n): 
        ans=[]
        for com in combinations(range(1,10),k):
            if sum(com)==n:
                ans.append(list(com))
        return ans

