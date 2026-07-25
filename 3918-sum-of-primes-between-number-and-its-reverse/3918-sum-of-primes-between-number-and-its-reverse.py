class Solution(object):
    def sumOfPrimesInRange(self, n):
        m=int(str(n)[::-1])
        def prime(n):
            if 1>=n:
                return False
            i=2
            while i*i<=n:
                if n%i==0:
                    return False
                i+=1
            return True
        b=0
        if m>=n:
            for i in range(n,m+1):
                if prime(i):
                    b+=i
        elif n>=m:
            for i in range(m,n+1):
                if prime(i):
                    b+=i
        return b


        