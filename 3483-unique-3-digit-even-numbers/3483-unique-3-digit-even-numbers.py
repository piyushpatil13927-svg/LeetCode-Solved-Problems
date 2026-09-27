class Solution(object):
    def totalNumbers(self, digits):
        ans = set()
        for x in permutations(digits,3):
            if x[0]!=0 and x[2]%2==0:
                ans.add(x) 
        return len(ans)
