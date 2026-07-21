
class Solution(object):
    def letterCombinations(self, digits):
        a = [["abc"],["def"],["ghi"],["jkl"],["mno"],["pqrs"],["tuv"],["wxyz"]]
        digits = list(map(int,str(digits)))
        c=[]
        for i in digits:
            c+=a[i-2]
        com=[]
        part=[]
        def back(i):
            if i==len(c):
                com.append("".join(part))
                return
            for ch in c[i]:
                part.append(ch)
                back(i+1)
                part.pop()
        back(0)
        return com


            

        
                


        
        
        