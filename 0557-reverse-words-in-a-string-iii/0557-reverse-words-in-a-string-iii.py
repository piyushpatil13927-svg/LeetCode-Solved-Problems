class Solution(object):
    def reverseWords(self, s):
        a = s.split(" ")
        for i in range(len(a)):
            a[i] = a[i][::-1]
        s=""
        for i in a:
            s+=i+' '
        return s.strip()
