class Solution(object):
    def validDigit(self, n, x):
        if str(n)[0] != str(x):
            if str(x) in str(n):
                return True
        return False
        