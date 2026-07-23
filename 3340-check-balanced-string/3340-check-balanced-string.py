class Solution(object):
    def isBalanced(self, num):
        e=0
        o=0
        for i in range(len(num)):
            if i%2==0:
                o+=int(num[i])
            else:
                e+=int(num[i])
        return e==o
