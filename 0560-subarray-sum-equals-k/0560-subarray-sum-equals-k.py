class Solution(object):
    def subarraySum(self, nums, k):
        mp = {0:1}
        pre = 0
        ans = 0
        for x in nums:
            pre+=x
            ans+=mp.get(pre-k,0)
            mp[pre]=mp.get(pre,0)+1
        return ans