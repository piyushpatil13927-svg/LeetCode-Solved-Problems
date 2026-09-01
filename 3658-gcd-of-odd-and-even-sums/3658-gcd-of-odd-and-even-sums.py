class Solution:
    def gcdOfOddEvenSums(self, n: int) -> int:
        a=n+n
        even=0
        odd=0
        for i in range(1,a+1):
            if i%2==0:
                even+=i 
            else:
                odd+=i 
        def gcd(a,b):
            while (b!=0):
                a,b = b,a%b 
            return a
        return gcd(odd,even)
        

        