from itertools import permutations

class Solution(object):
    def getPermutation(self, n, k):
        perms = permutations(range(1, n + 1))

        for i, p in enumerate(perms, 1):
            if i == k:
                return ''.join(map(str, p))