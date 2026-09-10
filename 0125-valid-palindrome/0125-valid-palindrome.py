class Solution(object):
    def isPalindrome(self, s):
        a=""
        for i in s:
            if i.isalnum():
                a+=i.lower()
        return a[::-1]==a
        