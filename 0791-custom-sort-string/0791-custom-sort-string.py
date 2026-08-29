class Solution:
    def customSortString(self, order: str, s: str) -> str:
        a=""
        for i in order:
            if i in s:
                x=s.count(i) 
                a+=i*x
        for i in s:
            if i not in order:
                a+=i 
        return a
